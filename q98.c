#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter the full name: ");
    fgets(name, sizeof(name), stdin);

    int i = 0;
    // Print the first initial
    if (name[i] != ' ') {
        printf("%c. ", name[i]);
    }

    // Loop through the name to find initials and surname
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            // Check if this is the surname (last word)
            int j = i + 1;
            while (name[j] != ' ' && name[j] != '\0' && name[j] != '\n') {
                j++;
            }
            if (name[j] == '\0' || name[j] == '\n') {
                printf("%s", &name[i+1]); // Print surname
                break;
            } else {
                printf("%c. ", name[i+1]); // Print initial
            }
        }
        i++;
    }

    return 0;
}
