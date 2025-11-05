//Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

int find_pivot_index(int nums[], int n) {
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += nums[i];
    }

    int left_sum = 0;
    for (int i = 0; i < n; i++) {
        int right_sum = total_sum - left_sum - nums[i];
        if (left_sum == right_sum) {
            return i;
        }
        left_sum += nums[i];
    }

    return -1;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int pivot_index = find_pivot_index(nums, n);
    printf("%d\n", pivot_index);

    return 0;
}
