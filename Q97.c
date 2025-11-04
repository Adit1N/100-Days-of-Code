//Print the initials of a name.

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main() {
    char name[MAX_LENGTH];
    int i;

    // Input the full name
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the initials
    printf("The initials are: ");
    // Print the first character as the first initial
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", name[0]);
    }

    // Traverse the string to find spaces and print the next character as an initial
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
    }
    printf("\n");

    return 0; 
}