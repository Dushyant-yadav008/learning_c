#include <stdio.h>
#include <string.h>

// Function to convert the date format
void format_date_q99(const char *input_date, char *output_date) {
    // A robust mapping of all 12 months for a complete solution.
    // We only strictly need "04" -> "Apr" for this specific problem, but this is better practice.
    const char *month_map[13] = {
        "",    // Index 0 unused
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    char day[3];    // To store "dd" (2 characters + null terminator)
    char month[3];  // To store "mm" (2 characters + null terminator)
    char year[5];   // To store "yyyy" (4 characters + null terminator)
    int month_num;

    // 1. Parse the input string (dd/mm/yyyy)
    // The sscanf function reads formatted data from a string.
    // %2s reads 2 characters into day (for dd)
    // %*c skips the next character ('/')
    // %2s reads 2 characters into month (for mm)
    // %*c skips the next character ('/')
    // %4s reads 4 characters into year (for yyyy)
    sscanf(input_date, "%2s/%2s/%4s", day, month, year);

    // 2. Convert the month string "mm" to an integer
    sscanf(month, "%d", &month_num);
    
    const char *month_abbr;

    // 3. Get the month abbreviation
    if (month_num >= 1 && month_num <= 12) {
        month_abbr = month_map[month_num];
    } else {
        // Fallback for invalid month number
        month_abbr = "???"; 
    }

    // 4. Construct the new output string (dd-Month-yyyy)
    // The sprintf function writes formatted data to a string.
    sprintf(output_date, "%s-%s-%s", day, month_abbr, year);
}

int main() {
    // Test Case 1: The date format specified in the problem
    const char *date1_input = "15/04/2023";
    char date1_output[15]; // dd-Mon-yyyy (10 characters) + 2 hyphens + null terminator (~13-14 max)
    
    format_date_q99(date1_input, date1_output);
    printf("Input: %s\nOutput: %s\n\n", date1_input, date1_output);
    // Expected Output: 15-Apr-2023

    // Test Case 2: Another month for robustness
    const char *date2_input = "01/12/1999";
    char date2_output[15];
    
    format_date_q99(date2_input, date2_output);
    printf("Input: %s\nOutput: %s\n", date2_input, date2_output);
    // Expected Output: 01-Dec-1999

    return 0;
}