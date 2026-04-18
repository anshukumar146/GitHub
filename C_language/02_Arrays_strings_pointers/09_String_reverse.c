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
    
    char *start = str;                        // Set pointers for reversal
    end = end - 1;                            // Move back from '\0' to the last letter
    char temp;

    while (start < end) {                      // 3. Swap using pointers
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed: %s\n", str);
    return 0;
}