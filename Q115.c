//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256

int length_of_longest_substring(char *s) {
    int n = strlen(s);
    int last_index[CHAR_RANGE];  // stores last indexes of characters
    for (int i = 0; i < CHAR_RANGE; i++) {
        last_index[i] = -1;  // initialize all to -1
    }

    int max_len = 0;
    int start = 0;  // start index of current substring without repeating chars

    for (int i = 0; i < n; i++) {
        // If character seen after start of current substring, update start
        if (last_index[(unsigned char)s[i]] >= start) {
            start = last_index[(unsigned char)s[i]] + 1;
        }

        last_index[(unsigned char)s[i]] = i;  // update last seen index
        int curr_len = i - start + 1;
        if (curr_len > max_len) {
            max_len = curr_len;
        }
    }
    return max_len;
}

int main() {
    char s[1001];  // assuming max length of input string is 1000
    printf("Enter the string: ");
    scanf("%1000s", s);

    int result = length_of_longest_substring(s);
    printf("%d\n", result);

    return 0;
}
