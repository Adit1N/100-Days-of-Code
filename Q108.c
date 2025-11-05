//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

void product_except_self(int nums[], int n, int answer[]) {
    int prefix_product = 1;
    // Calculate prefix products
    for (int i = 0; i < n; i++) {
        answer[i] = prefix_product;
        prefix_product *= nums[i];
    }

    int suffix_product = 1;
    // Calculate suffix products and multiply with prefix products
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix_product;
        suffix_product *= nums[i];
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int answer[n];
    product_except_self(nums, n, answer);

    printf("Answer array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
