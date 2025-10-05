#include <stdio.h>
#include <string.h>

char findFirstRepeatingChar(const char *str) {
    int count[26] = {0};  // Array to store count of characters

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            count[ch - 'a']++;
            if (count[ch - 'a'] == 2) {
                return ch;
            }
        }
    }
    return '\0';  // Return null character if no repeating character found
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s", str);

    char result = findFirstRepeatingChar(str);
    if (result != '\0') {
        printf("First repeating lowercase alphabet: %c\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
