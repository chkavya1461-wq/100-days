//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

void convertDateFormat(const char input[]) {
    // Array of 3-letter month abbreviations
    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    // Extract dd, mm, yyyy
    int day = 0, month = 0, year = 0;

    // Parse input formatted as dd/mm/yyyy
    int i = 0;

    // Parse Day (dd)
    if (input[i] >= '0' && input[i] <= '9') day = day * 10 + (input[i++] - '0');
    if (input[i] >= '0' && input[i] <= '9') day = day * 10 + (input[i++] - '0');

    if (input[i] == '/') i++; // Skip '/'

    // Parse Month (mm)
    if (input[i] >= '0' && input[i] <= '9') month = month * 10 + (input[i++] - '0');
    if (input[i] >= '0' && input[i] <= '9') month = month * 10 + (input[i++] - '0');

    if (input[i] == '/') i++; // Skip '/'

    // Parse Year (yyyy)
    while (input[i] >= '0' && input[i] <= '9') {
        year = year * 10 + (input[i++] - '0');
    }

    // Validate month range
    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return;
    }

    // Output in dd-Mon-yyyy format (e.g., 15-Apr-2026)
    printf("%02d-%s-%04d\n", day, months[month - 1], year);
}

int main(void) {
    char dateStr[100];

    if (fgets(dateStr, sizeof(dateStr), stdin) == NULL) {
        return 0;
    }

    convertDateFormat(dateStr);

    return 0;
}