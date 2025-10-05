#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, specialChars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            spaces++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (!isalpha(str[i]) && !isdigit(str[i]) && !isspace(str[i])) {
            specialChars++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);

    return 0;
}
