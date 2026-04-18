//swap two number without a third variable.
#include<stdio.h>
int main()
{
    int a , b;
printf("Entre first number 'a':\n");            //taking inputs from user.
scanf(" %d",&a);
printf("Enter second number 'b':\n");
scanf(" %d",&b);

a = a + b ;                 //a now have the sum of both variable.
b = a - b ;                 //b value is be swapped.   
a = a - b ;                 //Now,a will become the difference of changed value of (a-b),which is swapped value.


printf("After swapping:\na :%d \t b :%d",a,b);

return 0;
}
