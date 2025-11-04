//Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *

#include <stdio.h>
int main() {
    int i, j, spaces;
    int rows = 5;

    // Print the pattern
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (spaces = 1; spaces < i; spaces++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (rows - i + 1); j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0; 
}