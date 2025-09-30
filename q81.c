#include <stdio.h>

int main() {
    char str[1000]; // Buffer to hold the input string
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the input string

    // Loop through each character until the null terminator '\0' is found
    while (str[count] != '\0') {
        count++;
    }

    // To exclude the newline character from fgets (if present)
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    printf("The number of characters is: %d\n", count);

    return 0;
}
