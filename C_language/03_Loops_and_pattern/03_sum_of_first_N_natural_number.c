//PROGRAM TO PRINT sum of first 'N' NATURAL NUMBER.


#include<stdio.h>
int main()
{
    int n , i ;
    int sum = 0 ;

    printf("Enter the number :");                //Taking last number ('N') input from user.
    scanf(" %d",&n);


    printf(" The sum of natural numbers till %d are : " , n);


    for( i = 1 ; i <= n ; i++)                 //running loop till 'N' natural number.
    {
        sum = sum + i  ;
     
    }
            printf("%d ",sum);                      //printing sum of 'N' natural number.


    return 0;
}