#include<stdio.h>
#include<string.h>
void main(){
char str[100],i=0;
printf("enter a string: \n");
fgets(str, 100, stdin);

while(str[i]!='\0' && str[i] != '\n')
{   if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        str[i]='@';
    else if('0' <=str[i] && str[i]<= '9')
        str[i]='#';
    else
        str[i]='$';
    
    i++;
}
puts(str);}