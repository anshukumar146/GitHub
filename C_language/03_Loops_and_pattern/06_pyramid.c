// Program to print pyramid with star('*') using for loop.

#include <stdio.h>

int main() 
{
    int i, j, space, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {              // loop for rows
        for (space = 1; space <= n - i; space++) 
        {
            printf("  ");                   // print spaces
        }
        for (j = 1; j <= (2 * i - 1); j++) 
        {
            printf("* ");                   // print stars
        }

        printf("\n");
    }

    return 0;
}