//Find the second largest element in an array.

#include <stdio.h>
int main() {
    int n, i;
    int largest, second_largest;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements to find the second largest.\n");
        return 1;
    }

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    largest = second_largest = -2147483648; // Minimum possible integer value

    // Find the largest and second largest elements
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // Check if second largest was found
    if (second_largest == -2147483648) {
        printf("There is no second largest element (all elements may be equal).\n");
    } else {
        printf("The second largest element in the array is: %d\n", second_largest);
    }

    return 0; 
}