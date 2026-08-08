#include <stdint.h>

#define RCC     0x40023800
#define GPIOC   0x40020800
#define TIM2    0x40000000

#define RCC_AHB1ENR   ((volatile uint32_t *)(RCC   + 0x30))
#define RCC_APB1ENR   ((volatile uint32_t *)(RCC   + 0x40))

#define GPIOC_MODER   ((volatile uint32_t *)(GPIOC + 0x00))
#define GPIOC_PUPDR   ((volatile uint32_t *)(GPIOC + 0x0C))
#define GPIOC_IDR     ((volatile uint32_t *)(GPIOC + 0x10))
#define GPIOC_ODR     ((volatile uint32_t *)(GPIOC + 0x14))

#define TIM2_CR1      ((volatile uint32_t *)(TIM2  + 0x00))
#define TIM2_DIER     ((volatile uint32_t *)(TIM2  + 0x0C))
#define TIM2_SR       ((volatile uint32_t *)(TIM2  + 0x10))
#define TIM2_EGR      ((volatile uint32_t *)(TIM2  + 0x14))
#define TIM2_CNT      ((volatile uint32_t *)(TIM2  + 0x24))
#define TIM2_PSC      ((volatile uint32_t *)(TIM2  + 0x28))
#define TIM2_ARR      ((volatile uint32_t *)(TIM2  + 0x2C))

#define NVIC_ISER0    ((volatile uint32_t *)(0xE000E100))

// 1 ms tick configuration assuming 16 MHz system clock
#define TIMER_PRESCALER  15
#define TIMER_PERIOD     999

static volatile uint32_t green_timer = 0;
static volatile uint32_t red_timer = 0;
static volatile uint32_t button_timer = 0;

static volatile uint8_t green_ready = 0;
static volatile uint8_t red_ready = 0;
static volatile uint8_t button_ready = 0;

void GPIO_Init(void);
void TIM2_Init(void);

void GPIO_Init(void)
{
    // Enable GPIOC Clock (Bit 2)
    *RCC_AHB1ENR |= (1 << 2);

    // Clear MODER for PC0, PC1, PC3, PC4
    *GPIOC_MODER &= ~( (0b11 << 0) | (0b11 << 2) | (0b11 << 6) | (0b11 << 8) );

    // Set PC0=Input (00), PC1=Output (01), PC3=Output (01), PC4=Output (01)
    *GPIOC_MODER |=  ( (0b00 << 0) | (0b01 << 2) | (0b01 << 6) | (0b01 << 8) );

    // Configure PC0 with Internal Pull-Up
    *GPIOC_PUPDR &= ~(0b11 << 0);
    *GPIOC_PUPDR |=  (0b01 << 0);
}

void TIM2_Init(void)
{
    // Enable TIM2 Clock (Bit 0)
    *RCC_APB1ENR |= (1 << 0);

    *TIM2_PSC   = TIMER_PRESCALER;
    *TIM2_ARR   = TIMER_PERIOD;
    *TIM2_EGR  |= (1 << 0);        // Generate event to reload PSC and ARR
    *TIM2_SR   &= ~(1 << 0);        // Clear update interrupt flag
    *TIM2_DIER |= (1 << 0);        // Enable Update Interrupt
    *NVIC_ISER0 |= (1 << 28);      // Enable TIM2 IRQ in NVIC
    *TIM2_CR1  |= (1 << 0);        // Counter enable
}

void TIM2_IRQHandler(void)
{
    green_timer++;
    red_timer++;
    button_timer++;

    if (green_timer >= 500)
    {
        green_ready = 1;
        green_timer = 0;
    }

    if (red_timer >= 1000)
    {
        red_ready = 1;
        red_timer = 0;
    }

    if (button_timer >= 10)
    {
        button_ready = 1;
        button_timer = 0;
    }

    *TIM2_SR &= ~(1 << 0); // Clear UIF flag
}

int main(void)
{
    GPIO_Init();
    TIM2_Init();

    uint8_t last_button_state = 1;

    while (1)
    {
        if (green_ready)
        {
            *GPIOC_ODR ^= (1 << 3);
            green_ready = 0;
        }

        if (red_ready)
        {
            *GPIOC_ODR ^= (1 << 4);
            red_ready = 0;
        }

        if (button_ready)
        {
            uint8_t current_button_state = (*GPIOC_IDR & (1 << 0)) ? 1 : 0;

            // Toggle PC1 on falling edge (button press)
            if (last_button_state == 1 && current_button_state == 0)
            {
                *GPIOC_ODR ^= (1 << 1);
            }

            last_button_state = current_button_state;
            button_ready = 0;
        }
    }
}
