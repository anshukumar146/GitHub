#include<stdio.h>
int main(){
char str[50];
int i=0;
printf("Enter the string: ");
fgets(str, sizeof(str),stdin);              //Get string from user.
while (str[i]!='\0')
{
    i++;                                    //counts 
}
if (i > 0 && str[i - 1] == '\n')
 {
    str[i - 1] = '\0';       // Replace Enter with Null
    i--;                    // Correct the count
}

printf("Length of string is %d \n",i);

}