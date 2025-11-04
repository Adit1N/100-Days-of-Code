//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>
int main() {
    char binary[65]; // Assuming a maximum of 64 bits for the binary number
    char ones_complement[65];
    int i, length;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    length = strlen(binary);

    // Calculate 1's complement
    for (i = 0; i < length; i++) {
        if (binary[i] == '0') {
            ones_complement[i] = '1';
        } else if (binary[i] == '1') {
            ones_complement[i] = '0';
        } else {
            printf("Invalid input! Please enter a valid binary number.\n");
            return 1; // Exit with error
        }
    }
    ones_complement[length] = '\0'; // Null-terminate the string

    printf("1's complement of %s is %s\n", binary, ones_complement);

    return 0; 
}