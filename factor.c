#include <stdio.h>

int main() {
    int num, i;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    
    // Loop to find the factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
