//PROGRAM TO PRINT 'N' NUMBER OF NATURAL NUMBER.


#include<stdio.h>
int main()
{
    int n , i ;

    printf("Enter the number :");                //Taking last number ('N') input from user.
    scanf("%d",&n);


    printf(" The natural numbers till %d are : " , n);


    for( i = 1 ; i <= n ; i++)                 //running loop till 'N' natural number.
    {

        printf("%d ",i);                      //printing 'N' natural number.
     
    }

    return 0;
}