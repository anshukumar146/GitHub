#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main() {
    char vocab[76][20]={"watashi","anata","sensei","kyoushi","gakusei","kaishain","shain","ginkouin","isha","kenyuusha","enjinia","daigaku","byouin","denki","dare","donata","sai","hai","iie","hajimemashite","igirisu","amerika","indo","indoneshia","kankoku","tai","doitsu","furansu","burajiru","nihon","firipin","kore","sore","are","kono","sono","ano","hon","jisho","zasshi","shinbun","nooto","techou","meishi","kaado","terehonkaado","enpitsu","boorupen","shaapupenshiru","kagi","tokei","kasa","kaban","teepu","kasetto","kasettoteepu","teepurekoodaa","terebi","rajio","kamera","konpyuutaa","jidousha","tsukue","isu","chokoreeto","koohii","eigo","nihongo","nan","nani","sou","soudesuka","chigaimasu","anou","doumo arigatou gozaimasu","arigatou gozaimasu","korekara osewani narumasu","douzo"};

    char input[20];
    int found = 0;

    printf("--- Japanese Vocab Search (Lesson 1 & 2 of Minna no Nihongo) ---\n");
    printf("Enter a word in Romaji: ");
    
    fgets(input, sizeof(input), stdin);                 // Get input and remove the newline character
    input[strcspn(input, "\n")] = '\0'; 

    for(int i = 0; input[i]; i++){                      //lower the case.
    input[i] = tolower(input[i]);}


    for (int i = 0; i < 15; i++) {                      // Search 
        if (strcmp(input, vocab[i]) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf(" Success! '%s' is in vocabulary list.\n", input);
    } else {
        printf(" Not found!\n");
    }

    return 0;

}