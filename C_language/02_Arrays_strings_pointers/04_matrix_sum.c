#include<stdio.h>
int main(){
int matrix[3][3];
printf("Enter the elements matrix:\n");     //Get matrix element.
for(int i=0; i<3; i++)
{for(int j=0; j<3; j++)
scanf("%d",&matrix[i][j]);
}
int sum=0;                                  //Sum of every element of the matrix.
for(int i=0; i<3; i++)
{for(int j=0; j<3; j++)
sum=matrix[i][j]+sum;
}
printf("sum=%d",sum);                   //Print the sum.
return 0;
}