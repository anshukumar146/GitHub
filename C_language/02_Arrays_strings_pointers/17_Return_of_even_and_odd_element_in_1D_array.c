#include<stdio.h>
void sum(int *p, int b, int *c ,int *d){
    *c = 0 , *d = 0;
   for(int i=0 ; i<b ; i++)
   {
    if(*(p+i) %2==0)        //check for even and odd.
    {
        *c += *(p+i);  
    }
    else
    {
        *d += *(p+i);
    }
     }
}

int main(){
    int n,i,*ptr;
printf("enter limit of the array: \n");
scanf("%d",&n);
int arr[n],even,odd;
ptr = arr;
printf("enter an array: \n");       //Input an array.
for(i=0 ; i<n ; i++)
{scanf("%d",(ptr+i));}

sum(ptr,n , &even , &odd);       //Function calling.

printf("sum of even elements : %d \n", even);
printf("sum of odd elements : %d \n",odd );
return 0;
}