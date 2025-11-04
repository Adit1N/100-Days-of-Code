//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main() {
    int rows, cols, i, j;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols]; // Declare a 2D array (matrix)
    int row_sums[rows];     // Array to store sum of each row

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of each row
    for (i = 0; i < rows; i++) {
        row_sums[i] = 0; // Initialize sum for the current row
        for (j = 0; j < cols; j++) {
            row_sums[i] += matrix[i][j];
        }
    }

    // Print the sum of each row
    printf("The sum of each row is:\n");
    for (i = 0; i < rows; i++) {
        printf("Sum of row %d: %d\n", i, row_sums[i]);
    }

    return 0; 
}