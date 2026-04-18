#include<stdio.h>
int main(){
int n,i,a;
printf("Enter the size of first array:\n");             //Ask user for size of array.
scanf("%d",&n);
int arr1[n];
printf("enter the element of first array:\n");          //Input elements of array.
for(i=0; i<n;i++)
{
    scanf("%d",&arr1[i]);
}
printf("Select 1:Ascending order \t 2:Descending order\n");
scanf("%d",&a);
switch(a)
{case 1:
for (int i = 0; i < n - 1; i++) {                        //number of passes.
    for (int j = 0; j < n - i - 1; j++){                //compare the elements.
        if (arr1[j] > arr1[j + 1]){      
            int temp = arr1[j];
            arr1[j] = arr1[j + 1];
            arr1[j + 1] = temp;
        }
    }
}break;
case 2:
for (int i = 0; i < n - 1; i++) {                        //number of passes.
    for (int j = 0; j < n - i - 1; j++){                //compare the elements.
        if (arr1[j] < arr1[j + 1]){      
            int temp = arr1[j];
            arr1[j] = arr1[j + 1];
            arr1[j + 1] = temp;
        }
    }
}break;
default:
printf("Enter the valid input");
}

for(i=0; i<n; i++){                                        //print the array.
    printf("%d ",arr1[i]);
}
return 0;

}