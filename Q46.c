//Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****

#include <stdio.h>
int main() {
    int i, j;
    int rows = 5;
    int columns = 5;

    // Print the pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= columns; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0; 
}