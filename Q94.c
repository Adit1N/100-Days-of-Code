//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000
int main() {
    char sentence[MAX_LENGTH];
    char longestWord[MAX_LENGTH] = "";
    char currentWord[MAX_LENGTH];
    int i = 0, j = 0;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Traverse the sentence to find words
    while (1) {
        // If we reach a space or end of string, we found a word
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\0') {
            if (j > 0) { // If currentWord has characters
                currentWord[j] = '\0'; // Null-terminate the current word

                // Check if current word is longer than longestWord
                if (strlen(currentWord) > strlen(longestWord)) {
                    strcpy(longestWord, currentWord); // Update longestWord
                }

                j = 0; // Reset currentWord index for next word
            }

            if (sentence[i] == '\0') {
                break; // End of string reached
            }
        } else {
            currentWord[j++] = sentence[i]; // Add character to current word
        }
        i++;
    }

    // Output the longest word
    if (strlen(longestWord) > 0) {
        printf("The longest word is: %s\n", longestWord);
    } else {
        printf("No words found in the sentence.\n");
    }

    return 0; 
}