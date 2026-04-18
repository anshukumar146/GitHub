#include<stdio.h>
int main(){
int n,i;
printf("Enter the size of first array:\n");             //Ask user for size of array.
scanf("%d",&n);
int arr1[n];
int arr3[n];
printf("enter the element of first array:\n");          //Input element of first array.
for(i=0; i<n;i++)
{
    scanf("%d",&arr1[i]);
}
int arr2[n];
printf("enter the element of second array:\n");         //Input element of second array.
for(i=0; i<n;i++)
{
    scanf("%d",&arr2[i]);
}
printf("The sum of arrays is:\n");
for(i=0;i<n;i++)
{arr3[i]=arr1[i]+arr2[i];                               //Adding two arrays.
    printf("%d ",arr3[i]);
}
}