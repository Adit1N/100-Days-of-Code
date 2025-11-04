//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[26] = {0}; // Frequency array for 26 lowercase letters
    int i, index;
    char first_repeating = '\0';

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string to find the first repeating character
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            index = str[i] - 'a'; // Calculate index (0-25)
            freq[index]++; // Increment frequency

            // If frequency becomes 2, we found our first repeating character
            if (freq[index] == 2) {
                first_repeating = str[i];
                break;
            }
        }
    }

    // Output the result
    if (first_repeating != '\0') {
        printf("The first repeating lowercase alphabet is: %c\n", first_repeating);
    } else {
        printf("No repeating lowercase alphabet found in the string.\n");
    }

    return 0; 
}