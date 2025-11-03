#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *file_ptr;
    char filename[100];
    char text_to_append[200];

    printf("Enter the name of the file to append to: ");
    scanf("%s", filename);

    // Open the file in append mode ("a")
    file_ptr = fopen(filename, "a");

    // Check if the file was opened successfully
    if (file_ptr == NULL) {
        printf("Error opening file '%s'.\n", filename);
        exit(EXIT_FAILURE); // Exit with an error code
    }

    // Consume the newline character left by scanf
    while (getchar() != '\n'); 

    printf("Enter the text to append (will be added on a new line): \n");
    // Read the user's input, including spaces
    fgets(text_to_append, sizeof(text_to_append), stdin);

    // Write a newline character before the new text to ensure it starts on a new line
    fprintf(file_ptr, "\n%s", text_to_append);

    printf("Text successfully appended to '%s'.\n", filename);

    // Close the file
    fclose(file_ptr);

    return 0; // Indicate successful execution
}
