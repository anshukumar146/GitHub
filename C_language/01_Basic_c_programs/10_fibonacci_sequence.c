// Program to print Fibonacci series up to n terms

#include <stdio.h>

int main() 
{
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;

    printf("Enter number of terms: ");      //taking input from user.
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) 
    {
        printf("%d ", t1);          // print current term
        nextTerm = t1 + t2;         // calculate next term
        t1 = t2;                    // move forward
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}