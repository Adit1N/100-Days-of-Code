//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>

void max_in_subarrays(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int max_element = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max_element) {
                max_element = arr[j];
            }
        }
        printf("%d", max_element);
        if (i != n - k) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    max_in_subarrays(arr, n, k);

    return 0;
}
