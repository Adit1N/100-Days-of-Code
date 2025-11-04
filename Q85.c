//Reverse a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int length, i;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    length = 0;
    while (str[length] != '\0') {
        length++;
    }
    // Adjust length to exclude the newline character if present
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    // Reverse the string
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0; 
}