/* Create a structure Customer with the data fields customer_name,
account_number and account-balance of customer. Store information of
n customers : (CO4)
(i) Write a function to print name of all the customers having balance
less than 5,000.
(ii) Write a function to add 1,000 in the account-balance of all the
customers having balance more than ? 10,000 and print the updated
details of all the customers.
*/

#include<stdio.h>

struct customer{

char name[20];
int  number  ,  balance;
};

void myfunc(struct customer c[], int n);
void sum(struct customer c[], int n);

void main(){

int n , i ; 

printf("Enter number of elements:");
scanf(" %d",&n);

struct customer c[n];

printf("\nEnter customer's detail \n");
printf("\n                 Enter customer's name , account_number , account-balance                  \n");
for(i=0; i<n;i++)
{
    scanf("%s%d%d",c[i].name,&c[i].number,&c[i].balance);
}


myfunc(c,n);
sum(c,n);
}

void myfunc(struct customer c[], int n){
 printf("\n customers having balance less than 5,000.\n");
for(int i=0 ; i < n ;i++ )
{
    if(c[i].balance < 5000)
    {
        printf(" %s \n",c[i].name);
    }
    
}

};

void sum(struct customer c[], int n){
printf("\n customers having balance more than 10,000 , added 1000.\n");
for(int i=0 ; i < n ;i++ )
{
    if(c[i].balance > 10000)
    {
        c[i].balance =c[i].balance+1000;
    }
}
for(int i=0 ; i < n ;i++ )
{
    printf(" %s \n %d \n %d\n",c[i].name,c[i].number,c[i].balance);

}
};



