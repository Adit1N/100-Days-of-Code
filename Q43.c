//Write a program to check if a number is a strong number.

#include <stdio.h>

// Function to calculate factorial of a number
long long calculateFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder;
    long long sumOfFactorials = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for comparison

    // Iterate through each digit of the number
    while (num > 0) {
        remainder = num % 10; // Get the last digit
        sumOfFactorials += calculateFactorial(remainder); // Add factorial of the digit to the sum
        num /= 10; // Remove the last digit
    }

    // Check if the sum of factorials equals the original number
    if (sumOfFactorials == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}