#include <stdio.h>

int main() {
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);            //Get string.

    char *end = str;                           //Find length and clean newline
    while (*end != '\0') {
        end++;
    }
    if (end > str && *(end - 1) == '\n') {
        *(end - 1) = '\0';
        end--; 
    }
    
    char *start = str;                        // Set pointers for reversal.
    end = end - 1;                            // Move back from '\0' to the last letter
    int flag = 1;                             //Assuming temp is a palindrome.

    while (start < end) {                      
        if(*start != *end){                 //finds any mismatch
            flag =0;
            break;
        }
        start++;
        end--;
    }
    if(flag)                                //print the output.
    printf("It is a palindrome\n");
    else
     printf("It is not a palindrome\n");
    return 0;
}
