//Remove all vowels from a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100], result[100];
    int i, j = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove vowels
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is not a vowel
        if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' &&
            str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
            result[j++] = str[i]; // Add non-vowel character to result
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    // Print the modified string
    printf("String after removing vowels: %s", result);

    return 0; 
}