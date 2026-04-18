#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int freq[26] = {0};

    printf("Enter first string: ");  scanf("%s", s1);
    printf("Enter second string: "); scanf("%s", s2);

    if (strlen(s1) != strlen(s2)) { printf("Not Anagram\n"); return 0; }

    for (int i = 0; s1[i]; i++) {
        char c = s1[i];
        if (c >= 'A' && c <= 'Z') c = c + 32;
        freq[c - 'a']++;
    }
    for (int i = 0; s2[i]; i++) {
        char c = s2[i];
        if (c >= 'A' && c <= 'Z') c = c + 32;
        freq[c - 'a']--;
    }

    for (int i = 0; i < 26; i++)
        if (freq[i] != 0) { printf("Not Anagram\n"); return 0; }

    printf("Valid Anagram\n");
    return 0;
}