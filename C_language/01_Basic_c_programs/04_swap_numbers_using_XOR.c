// swapping two numbers using XOR (^) bitwise operator.

#include<stdio.h>
int main()
{int a , b ;
printf("Entre first number'a':\n");                //take inputs from user.
scanf(" %d",&a);
printf("Enter second number 'b':\n");
scanf(" %d",&b);

a = a ^ b ;                       //a will become (a ^ b)
b = a ^ b ;                       // b become (a ^b) , but since a is now (a ^ b), b becomes the original value of a
a = a ^ b ;                       // a become (a ^ b),but since b is now original value of a,a becomes original value of b

printf("After swapping:\n a:%d \t b :%d",a,b);
return 0;
}
