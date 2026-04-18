#include <stdio.h>

struct date {
    int day, month, year;
};

// days in each month

int daysInMonth(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // leap year check

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return 29;
    }
    return days[month - 1];
}

int main() {
    struct date d;
    int n;

    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    printf("Enter number of days to add: ");
    scanf("%d", &n);

    d.day += n;     //add days.

    // adjust days and months

    while (d.day > daysInMonth(d.month, d.year)) {
        d.day -= daysInMonth(d.month, d.year);
        d.month++;

        // adjust month and year
        
        if (d.month > 12) {
            d.month = 1;
            d.year++;
        }
    }

    printf("New Date = %d/%d/%d\n", d.day, d.month, d.year);

    return 0;
}