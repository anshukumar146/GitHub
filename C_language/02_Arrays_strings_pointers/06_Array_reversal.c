#include<stdio.h>
int main(){
int n,i;
printf("Enter the size of first array:\n");             //Ask user for size of array.
scanf("%d",&n);
int arr1[n];
printf("enter the element of first array:\n");          //Input elements of array.
for(i=0; i<n;i++)
{
    scanf("%d",&arr1[i]);
}
for(i=0; i<n/2; i++){                                   //reverse the array using third temporary variable.
    int temp=arr1[i];
    arr1[i]=arr1[n-i-1];
    arr1[n-i-1]=temp;
}
for(i=0; i<n; i++){                                        //print the array.
    printf("%d ",arr1[i]);
}
return 0;
}