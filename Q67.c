//Insert an element in an array at a given position.

#include <stdio.h>
int main() {
    int n, i, element, position;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Declare an array of size n+1 to accommodate the new element

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    // Input the position where the element is to be inserted
    printf("Enter the position (0 to %d) to insert the element: ", n);
    scanf("%d", &position);

    // Validate the position
    if (position < 0 || position > n) {
        printf("Invalid position! Please enter a position between 0 and %d.\n", n);
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Print the updated array
    printf("The array after insertion is:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; 
}