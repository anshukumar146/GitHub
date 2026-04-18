#include<stdio.h>
int main(){
    int n, i, b, a;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");         //Taking inputs.
    for(i=0; i<n; i++)
    scanf("%d",&arr[i]);
    a=arr[0];
     printf("select:\n 1:Biggest number \t 2:Smallest number\n");           //Asking for selection.
     scanf("%d",&b);
     switch(b)
     {case 1:
                for(i=1; i<n; i++){                         //for biggest number in the array.
                 if(a<arr[i])
                 a=arr[i];
                }
                printf("Biggest number is %d\n",a);
                break;
    case 2:
                for(i=1; i<n; i++){                      //for smallest number in the array.
                 if(a>arr[i])
                 a=arr[i];
                }
                printf("Smallest number is %d\n",a);
                break;
    default:
    printf("Enter valid input");

     }

return 0;   
}