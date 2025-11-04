//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main() {
    int n, i, j, is_prime;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) {
        is_prime = 1; // Assume i is prime
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; // i is not prime
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0; 
}