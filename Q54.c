//Write a program to print the following pattern:

//   *
//  ***
// *****
//*******
// *****
//  ***
//   *

#include <stdio.h>
int main() {
    int i, j, spaces;
    int rows = 4; // Number of rows for the upper half

    // Print the upper half of the pattern
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    // Print the lower half of the pattern
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (spaces = 1; spaces <= rows - i; spaces++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0; 
}