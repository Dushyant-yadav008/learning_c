#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Nested if-else to determine the number's sign
    if (num >= 0) {
        if (num == 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is positive.\n");
        }
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}
