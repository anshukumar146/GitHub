#include<stdio.h>
int main(){
int n,i,*p;
    
printf("Enter the size of first array:\n");             //Ask user for size of array.
scanf("%d",&n);
int arr1[n],arr2[n],arr3[n];
int *p1=arr1;                                          //reffering to arrays.
int *p2=arr2;
int *p3=arr3;
printf("enter the element of first array:\n");          //Input element of first array.
for(i=0; i<n; i++)
{
    scanf("%d", (p1 + i));
}
printf("enter the element of second array:\n");         //Input element of second array.
for(i=0; i<n;i++)
{
    scanf("%d", (p2 + i));
}
printf("The sum of arrays is:\n");
for(i=0;i<n;i++)
{*(p3 + i )=*(p1 + i)+ *(p2 + i);                               //Adding two arrays.
    printf("%d ",*(p3 + i ));
}
return 0;
}
