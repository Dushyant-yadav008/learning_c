#include <stdio.h>
#include <ctype.h> // Required for toupper() function

int main() {
    int character;

    // Read characters from standard input until EOF (End Of File) is reached
    while ((character = getchar()) != EOF) {
        // Convert the character to uppercase if it's a lowercase letter
        // Otherwise, keep the character as it is
        putchar(toupper(character));
    }

    return 0;
}
