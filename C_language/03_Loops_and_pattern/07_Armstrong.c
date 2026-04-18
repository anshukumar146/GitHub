//   PROGRAM TO PRINT right angled triangle with stars(*) using for loop. 


#include <stdio.h>
int main()
{
    int i , j , a ;

printf ("Enter the number of rows : ");
scanf("%d ",&a);

for(i = 1; i <= a; i++)          // outer loop for rows.
{
    for(j = 1; j <= i; j++)      // inner loop for number of stars in each row.

    { 

    printf("* ");               // print '*'

    }

     printf("\n");              // changes line.

}
   

    return 0;
}



