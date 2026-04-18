//TO FIND LARGEST BETWEEN THREE NUMBER.

#include<stdio.h>
int main()
{
    int num1 , num2 , num3 ;                        //Taking input from user.
printf("Entre first number:\n");
scanf(" %d",&num1);

printf("Enter second number:\n");
scanf(" %d",&num2);

printf("Enter third number:\n");
scanf(" %d",&num3);

if( num1 >= num2 && num1 >= num3)                       //Check if num1 greater number between num1,num2 and num3.
printf("%d is the greatest number.",num1);              

else if (num2 >= num1 && num2 >= num3)                 //Check if num2 greater number between num1,num2 and num3.
printf("%d is the greatest number.",num2);    

else
{
    printf("%d is the greatest number among all the numbers.",num3);        //by default if num1 and num2 are not greatest then num3 is gratest.

}

return 0;
}
