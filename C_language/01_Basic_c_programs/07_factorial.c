// FINDING FACTORIAL OF A NUMBER USING FOR LOOP.

#include<stdio.h>
int main()
{  
     int a ,i,fact = 1;                           //Initialising the fact varible

printf("Entre a number:\n");                            //Taking input from user.
scanf(" %d",&a);

for( i=a ; i >= 1 ; i--)                        //Running loop from [a,1] and it decrease by 1 evertime it runs.
{
    fact = fact * i;                           //The value stores each time after multiplying 
}
printf("Factorial of %d is:%d",a,fact);        //Results are printed.
return 0;
}
