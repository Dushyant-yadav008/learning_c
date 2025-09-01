#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    // Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the bill based on the units consumed
    if (units <= 100) {
        bill = units * 1.5;
    } else if (units <= 300) {
        bill = (100 * 1.5) + ((units - 100) * 2.0);
    } else {
        bill = (100 * 1.5) + (200 * 2.0) + ((units - 300) * 3.0);
    }

    // Display the total bill
    printf("Total electricity bill: $%.2f\n", bill);

    return 0;
}
