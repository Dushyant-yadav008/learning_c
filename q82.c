#include <stdio.h>

int main() {
    char str[] = "Hello, World!"; // Example string
    int i = 0;

    while (str[i] != '\0') { // Loop until the null terminator
        printf("%c\n", str[i]); // Print each character followed by a newline
        i++;
    }

    return 0;
}
