//REVESING A NUMBER USING WHILE LOOP.
#include <stdio.h>

int main() 
{
    int num, reverse = 0, remainder;

    printf("Enter a number: ");                 //Taking input from user.
    scanf("%d", &num);

    while (num != 0) 
    {
        remainder = num % 10;                                      //takes the last digit.
        printf("\nExtracted digit: %d\n", remainder);

        reverse = reverse * 10 + remainder;                       //Add the last digit with 'revese' and stores it as new value in 'reverse'.
        printf("Reversed so far (revese * 10 + remainder): %d\n", reverse);

        num /= 10;                                                //It removes the last digit or we can say before used digit.  
        printf("Remaining number: %d\n\n", num);
    }

    printf("Final Reversed Number = %d\n", reverse);               //print reversed number.
return 0;
}