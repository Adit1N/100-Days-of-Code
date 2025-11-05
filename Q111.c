//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

void first_negative_in_subarrays(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int first_negative = 0;  // 0 means no negative found
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_negative = arr[j];
                break;
            }
        }
        printf("%d", first_negative);
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

    first_negative_in_subarrays(arr, n, k);

    return 0;
}
