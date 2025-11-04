//Find the sum of all elements in a matrix.

#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int sum = 0;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols]; // Declare a 2D array (matrix)

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add the element to sum
        }
    }

    // Print the sum of all elements
    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0; 
}