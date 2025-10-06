#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000], word[100], longest[100];
    int i = 0, j = 0, maxLength = 0, length;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0'; 
            length = strlen(word);
            if (length > maxLength) {
                maxLength = length;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    if (j > 0) { // Check the last word
        word[j] = '\0';
        length = strlen(word);
        if (length > maxLength) {
            strcpy(longest, word);
        }
    }

    printf("The longest word is: %s\n", longest);

    return 0;
}
