//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For malloc and free

// Function to check if one string is a rotation of another
int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // If lengths are different, they cannot be rotations
    if (len1 != len2) {
        return 0; // False
    }

    // Create a temporary string by concatenating s1 with itself
    char *temp = (char *)malloc(sizeof(char) * (2 * len1 + 1));
    if (temp == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is a substring of temp
    if (strstr(temp, s2) != NULL) {
        free(temp); // Free allocated memory
        return 1; // True
    } else {
        free(temp); // Free allocated memory
        return 0; // False
    }
}

int main() {
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline

    if (isRotation(str1, str2)) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}