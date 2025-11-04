//Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    int number, digit, count;
    int max_count = 0;
    int most_frequent_digit = -1;
    int frequency[10] = {0}; // Array to store frequency of digits 0-9

    // Input the integer number
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Calculate the frequency of each digit
    while (number != 0) {
        digit = number % 10; // Get the last digit
        frequency[digit]++;   // Increment the frequency of that digit
        number /= 10;        // Remove the last digit
    }

    // Find the digit with the maximum frequency
    for (digit = 0; digit < 10; digit++) {
        if (frequency[digit] > max_count) {
            max_count = frequency[digit];
            most_frequent_digit = digit;
        }
    }

    // Print the result
    if (most_frequent_digit != -1) {
        printf("The digit that occurs the most is: %d (occurs %d times)\n", most_frequent_digit, max_count);
    } else {
        printf("No digits found.\n");
    }

    return 0; 
}