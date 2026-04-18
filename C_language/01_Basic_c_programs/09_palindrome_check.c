// Program to check if a number is palindrome

#include <stdio.h>

int main() 
{
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;                                         // store the original number

    
    while (num != 0)                                       // Reverse the number
    {
        remainder = num % 10;                              // get last digit
        reversed = reversed * 10 + remainder;              // build reversed number
        num /= 10;                                         // remove last digit
    }

   
    if (original == reversed)                               // Check palindrome
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is NOT a Palindrome.\n", original);

    return 0;
}