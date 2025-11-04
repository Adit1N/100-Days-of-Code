//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    int number;
    int binary[32]; // Array to store binary digits
    int index = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Handle the case when the number is 0
    if (number == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Convert to binary
    while (number > 0) {
        binary[index] = number % 2; // Store remainder (0 or 1)
        number = number / 2;         // Update number
        index++;
    }

    // Print binary representation in reverse order
    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0; 
}