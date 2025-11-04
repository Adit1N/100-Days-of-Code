//Toggle case of each character in a string.

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Toggle case of each character
    while (str[i] != '\0') {
        // Check if the character is uppercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert to lowercase by adding 32 to ASCII value
            str[i] = str[i] + 32;
        }
        // Check if the character is lowercase
        else if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str[i] = str[i] - 32;
        }
        i++;
    }

    // Print the modified string
    printf("The string after toggling case is: %s", str);

    return 0; 
}