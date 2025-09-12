#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {          // Loop for 5 rows
        for (int j = 0; j < 5; j++) {      // Loop for 5 stars in each row
            printf("*");
        }
        printf("\n");                    // Move to the next line after each row
    }
    return 0;
}
