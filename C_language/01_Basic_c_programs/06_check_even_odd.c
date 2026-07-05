// CHECKING FOR EVEN OR ODD.

#include<stdio.h>
int main()
{  
     int a ;

printf("Entre a:\n");                            // taking input from user.
scanf(" %d",&a);

if( a % 2 == 0)                                    //checking if remainder of a after dividing by 2 is zero or not.
printf("%d is an even number ",a);                 //if yes its even if not its odd.            

else
{printf("%d is an odd number ",a);}

return 0;
}
