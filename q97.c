#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first initial
    if (name[0] != ' ') {
        printf("%c", name[0]);
    }

    // Loop to find spaces and print the next character as an initial
    for (int i = 1; i < strlen(name); i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            printf("%c", name[i+1]);
        }
    }

    printf("\n");
    return 0;
}
