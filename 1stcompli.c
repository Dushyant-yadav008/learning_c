#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    // Taking binary number input
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Finding 1's complement
    printf("1's Complement: ");
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            printf("1");
        else if (binary[i] == '1')
            printf("0");
        else {
            printf("\nInvalid binary number.");
            return 1;
        }
    }

    printf("\n");
    return 0;
}
