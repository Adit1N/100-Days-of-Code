//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000
int main() {
    char sentence[MAX_LENGTH];
    char result[MAX_LENGTH] = "";
    int i = 0, start, end;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        // Skip spaces
        if (sentence[i] == ' ' || sentence[i] == '\n') {
            strncat(result, &sentence[i], 1); // Add space or newline to result
            i++;
            continue;
        }

        // Identify the start of the word
        start = i;

        // Move to the end of the word
        while (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0') {
            i++;
        }
        end = i - 1;

        // Reverse the word and add to result
        for (int j = end; j >= start; j--) {
            strncat(result, &sentence[j], 1);
        }
    }

    // Print the modified sentence
    printf("The sentence with each word reversed is: %s", result);

    return 0; 
}