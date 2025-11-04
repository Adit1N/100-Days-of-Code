//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
int main() {
    char name[MAX_LENGTH];
    int i, len;

    // Input the full name
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);
    // Remove trailing newline character if present
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    // Print the initials and surname
    printf("The formatted name is: ");
    // Print the first character as the first initial
    if (name[0] != ' ' && name[0] != '\0') {
        printf("%c. ", name[0]);
    }

    // Traverse the string to find spaces and print the next character as an initial
    for (i = 1; i < len; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c. ", name[i + 1]);
        }
    }

    // Find the start of the surname (last word)
    char *surname = strrchr(name, ' ');
    if (surname != NULL) {
        surname++; // Move past the space to the start of the surname
        printf("%s\n", surname); // Print the surname
    } else {
        // If there's no space, the entire name is considered as surname
        printf("%s\n", name);
    }

    return 0; 
}