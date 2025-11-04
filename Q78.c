//Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int diagonal_sum = 0;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // A matrix can only have a main diagonal if it is square
    if (rows != cols) {
        printf("The matrix does not have a main diagonal (not a square matrix).\n");
        return 0;
    }

    int matrix[rows][cols]; // Declare a 2D array (matrix)

    // Input elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the main diagonal elements
    for (i = 0; i < rows; i++) {
        diagonal_sum += matrix[i][i];
    }

    // Print the sum of the main diagonal elements
    printf("The sum of the main diagonal elements is: %d\n", diagonal_sum);

    return 0; 
}