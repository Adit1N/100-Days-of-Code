//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int find_missing_number(int arr[], int n) {
    int total_sum = n * (n + 1) / 2;  // sum of all numbers from 0 to n
    int arr_sum = 0;
    for (int i = 0; i < n; i++) {
        arr_sum += arr[i];
    }
    return total_sum - arr_sum;
}

int main() {
    int n;
    printf("Enter n (size including missing number): ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("Enter %d elements (0 to %d with one missing):\n", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = find_missing_number(arr, n - 1);
    printf("%d\n", missing);

    return 0;
}
