//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int max_subarray_sum(int arr[], int n) {
    int max_so_far = arr[0];
    int current_max = arr[0];
    int all_negative = 1;
    int max_element = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] >= 0) {
            all_negative = 0;
        }
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
        current_max = current_max + arr[i] > arr[i] ? current_max + arr[i] : arr[i];
        max_so_far = max_so_far > current_max ? max_so_far : current_max;
    }

    if (all_negative) {
        // All elements are negative, return the largest element
        return max_element;
    }
    return max_so_far;
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

    int result = max_subarray_sum(arr, n);
    printf("%d\n", result);

    return 0;
}
