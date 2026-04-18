//TABLE OF A NUMBER.
#include<stdio.h>
int main()
{
    int a , i ,result = 0 ;

    printf("Enter the number :");                //Taking input from user.
    scanf("%d",&a);

    for( i = 1 ; i <= 10 ; i++)                 //running loop for multipler.
    {
        result =a * i;                          // Calculation 

        printf(" %d * %d = %d \n",a,i,result);  //printing table of the number.
     
    }

}