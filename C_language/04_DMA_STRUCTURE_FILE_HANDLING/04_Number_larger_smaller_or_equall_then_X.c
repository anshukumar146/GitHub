
/*Input N integers using DMA. Input a no and count how many nos are larger, smaller and equal
to that number.*/


#include<stdio.h>
#include<stdlib.h>

void main(){
int n , i , a,lar = 0, small = 0,equ=0;
printf("enter number of elements:\n");
scanf("%d",&n);
int *arr =(int*)calloc(n,sizeof(int));

for(i=0 ; i<n ;i++)
{
    scanf("%d",&arr[i]);
}
printf("enter number of your choice:\n");
scanf("%d",&a);

for(i=0 ; i<n ;i++)
{
 if (a < arr[i]) 
    lar++;
else if (a == arr[i])
    equ++ ;
else
    small++;

}
for(i=0 ; i<n ;i++)
{
    printf(" %d ",arr[i]);
}
printf(" \n ");

printf("larger= %d \n",lar);
printf("smaller= %d \n",small);
printf("equal= %d \n",equ);
}


