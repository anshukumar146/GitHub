//Program to make calculator using switch case.
#include<stdio.h>
int main()
{
    int a , b , remainder , result =0;
    char op;

    printf("Enter the value of first number : ");                                   //Taking inputs from use.
    scanf(" %d",&a);

    printf("Enter the value of second number : ");
    scanf(" %d",&b);

    printf("Select the opetation between them ( + , - , * , / ) : ");              //Asking for operator to use
    scanf(" %c",&op);


        switch ( op )                                                              //Running switch by making different cases.
    {
        case '+' :
        result = a + b;
        printf("The sum of %d and %d is :%d",a,b,result);
        break;

        case '-' :
        result = a - b;
        printf("The difference of %d and %d is :%d",a,b,result);
        break;

        case '*' :
        result = a * b;
        printf("The product of %d and %d is :%d",a,b,result);
        break; 
        
        case '/' :
        if(b == 0)                                                              //checking if the second number is 0.
        {
         printf("the second number can't be equal to zero.");

        }

        else
        {
         
        result = a / b ;
        remainder = a % b ;    
        printf("The division of %d and %d is :%d \n Its remainder is %d",a,b,result,remainder);
        break;
        }



    }

    return 0;
}