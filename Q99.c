//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>
int main() {
    char date[11]; // Format: dd/04/yyyy
    char newDate[12]; // Format: dd-Apr-yyyy
    const char *month = "Apr"; // April abbreviation

    // Input the date
    printf("Enter the date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // Validate input length
    if (strlen(date) != 10 || date[2] != '/' || date[5] != '/') {
        printf("Invalid date format. Please use dd/04/yyyy format.\n");
        return 1;
    }

    // Construct the new date format
    newDate[0] = date[0];
    newDate[1] = date[1];
    newDate[2] = '-';
    newDate[3] = month[0];
    newDate[4] = month[1];
    newDate[5] = month[2];
    newDate[6] = '-';
    newDate[7] = date[6];
    newDate[8] = date[7];
    newDate[9] = date[8];
    newDate[10] = date[9];
    newDate[11] = '\0'; // Null-terminate the string

    // Print the reformatted date
    printf("The date in dd-Apr-yyyy format is: %s\n", newDate);

    return 0; 
}