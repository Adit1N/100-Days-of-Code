//Delete an element from an array.

#include <stdio.h>
int main() {
    int n, i, position;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to be deleted
    printf("Enter the position (0 to %d) of the element to be deleted: ", n - 1);
    scanf("%d", &position);

    // Validate the position
    if (position < 0 || position >= n) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n - 1);
        return 1;
    }

    // Shift elements to the left to delete the element at the specified position
    for (i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print the updated array
    printf("The array after deletion is:\n");
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; 
}