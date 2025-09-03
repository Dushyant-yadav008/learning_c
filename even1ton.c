#include <stdio.h>

int main() {
    int n, product = 1;

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculating the product of even numbers
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Handling the case when there are no even numbers
    if (n < 2) {
        printf("No even numbers in the range.\n");
    } else {
        printf("The product of even numbers from 1 to %d is: %d\n", n, product);
    }

    return 0;
}
