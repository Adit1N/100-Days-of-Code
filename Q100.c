//Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main() {
    char str[MAX_LENGTH];
    int len, i, j, k;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    len = strlen(str);

    printf("All substrings of the string are:\n");
    // Generate all substrings
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            // Print substring from index i to j
            for (k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar('\n'); // New line after each substring
        }
    }

    return 0; 
}