#include <stdio.h>

int main() {
    int lateDays;
    float fine = 0;

    // Input the number of late days
    printf("Enter the number of late days: ");
    scanf("%d", &lateDays);

    // Calculate the fine based on late days
    if (lateDays <= 0) {
        fine = 0;
    } else if (lateDays <= 5) {
        fine = lateDays * 1;  // $1 per day
    } else if (lateDays <= 10) {
        fine = (5 * 1) + (lateDays - 5) * 2;  // $2 per day after 5 days
    } else {
        fine = (5 * 1) + (5 * 2) + (lateDays - 10) * 5;  // $5 per day after 10 days
    }

    // Output the calculated fine
    printf("The library fine is: $%.2f\n", fine);

    return 0;
}
