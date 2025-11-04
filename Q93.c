//Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
#include <ctype.h> // For tolower()

#define MAX_SIZE 100 // Maximum size for input strings

// Function to check if two strings are anagrams
int areAnagrams(char *s1, char *s2) {
    int count1[256] = {0}; // Array to store character counts for s1
    int count2[256] = {0}; // Array to store character counts for s2
    int i;

    // Convert strings to lowercase for case-insensitive comparison
    for (i = 0; s1[i] != '\0'; i++) {
        s1[i] = tolower(s1[i]);
    }
    for (i = 0; s2[i] != '\0'; i++) {
        s2[i] = tolower(s2[i]);
    }

    // Count frequency of characters in s1
    for (i = 0; s1[i] != '\0'; i++) {
        count1[(int)s1[i]]++;
    }

    // Count frequency of characters in s2
    for (i = 0; s2[i] != '\0'; i++) {
        count2[(int)s2[i]]++;
    }

    // Compare the character count arrays
    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0; // Not anagrams if counts differ
        }
    }

    return 1; // Anagrams if all counts match
}

int main() {
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];

    printf("Enter the first string: ");
    fgets(str1, MAX_SIZE, stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove trailing newline character

    printf("Enter the second string: ");
    fgets(str2, MAX_SIZE, stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove trailing newline character

    if (areAnagrams(str1, str2)) {
        printf("The two strings are anagrams.\n");
    } else {
        printf("The two strings are not anagrams.\n");
    }

    return 0;
}