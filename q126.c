#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    char filename[100];
    FILE *file_pointer;
    char ch;

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Attempt to open the file in read mode
    file_pointer = fopen(filename, "r");

    // Check if the file pointer is NULL
    if (file_pointer == NULL) {
        fprintf(stderr, "Error: Could not open file '%s'. It may not exist or you lack permissions.\n", filename);
        return 1; // Indicate an error
    } else {
        printf("\nContent of '%s':\n", filename);
        // Read and display the content character by character
        while ((ch = fgetc(file_pointer)) != EOF) {
            printf("%c", ch);
        }
        printf("\n"); // Add a newline for better formatting after content

        // Close the file
        fclose(file_pointer);
    }

    return 0; // Indicate successful execution
}
