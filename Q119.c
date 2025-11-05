//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int find_repeated_element(int arr[], int n) {
    int freq[100001] = {0};  // assuming elements range within 0 to 100000
    
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > 1) {
            return arr[i];
        }
    }
    return -1;  // No repeated element found (should not happen as per problem)
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int repeated = find_repeated_element(arr, n);
    printf("%d\n", repeated);

    return 0;
}
