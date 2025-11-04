//Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    // Input the string
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    // Convert lowercase to uppercase
    while (str[i] != '\0') {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str[i] = str[i] - 32;
        }
        i++;
    }

    // Print the uppercase string
    printf("The uppercase string is: %s", str);

    return 0; 
}