//Write a program to reverse a given number.

#include <stdio.h>
int main() {
    int number, reversed_number = 0, remainder;

    printf("Enter an integer to reverse: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }

    printf("Reversed Number: %d\n", reversed_number);

    return 0; 
}