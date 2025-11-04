//Count characters in a string without using built-in length functions.

#include <stdio.h>
int main() {
    char str[100];
    int count = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters until the null terminator
    while (str[count] != '\0') {
        count++;
    }

    // Subtract 1 to exclude the newline character added by fgets
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    // Print the character count
    printf("The number of characters in the string is: %d\n", count);

    return 0; 
}