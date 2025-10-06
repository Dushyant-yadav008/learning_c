#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define CHAR_COUNT 256

int areAnagrams(char str1[], char str2[]) {
    int count[CHAR_COUNT] = {0};
    int i;

    // Compare lengths first
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count character occurrences
    for (i = 0; str1[i] && str2[i]; i++) {
        count[tolower(str1[i])]++;
        count[tolower(str2[i])]--;
    }

    // Check if counts are all zero
    for (i = 0; i < CHAR_COUNT; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline

    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}
