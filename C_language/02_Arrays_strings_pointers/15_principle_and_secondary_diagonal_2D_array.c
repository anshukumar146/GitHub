#include<stdio.h>
int main(){
int n,i,j,m;
printf("Enter the size of array:\n");             //Ask user for size of array.
scanf("%d",&n);
printf("Enter the size of  array:\n");             //Ask user for size of array.
scanf("%d",&m);
int arr1[n][m],sum=0;

printf("enter the element of  array:\n");          //Input element of  array.
for(i=0; i<n;i++)
{for(j=0;j<m;j++)
  { scanf("%d",&arr1[i][j]);}
 
}


printf("The principle diagonal is:\n");       //print the principle diagonal. 
for(i=0; i<n;i++)
{printf(" %d ",arr1[i][i]);}
printf("\n");

printf("The secondary diagonal is:\n");      //print the secondary diagonal.
for(i=0,j=m-1; i<n;i++,j--)
{

    {printf("%d ",arr1[i][j]);
}}
printf("\n");
}
