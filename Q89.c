//Count frequency of a given character in a string.

#include <stdio.h>
int main() {
    char str[100];
    char target_char;
    int i = 0;
    int frequency = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input the character to find its frequency
    printf("Enter the character to find its frequency: ");
    scanf("%c", &target_char);

    // Count the frequency of the target character
    while (str[i] != '\0') {
        if (str[i] == target_char) {
            frequency++;
        }
        i++;
    }

    // Print the frequency
    printf("The frequency of '%c' in the string is: %d\n", target_char, frequency);

    return 0; 
}