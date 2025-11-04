//Check if a matrix is symmetric.

#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int is_symmetric = 1; // Flag to check symmetry

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // A matrix can only be symmetric if it is square
    if (rows != cols) {
        printf("The matrix is not symmetric (not a square matrix).\n");
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

    // Check for symmetry
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0; // Not symmetric
                break;
            }
        }
        if (!is_symmetric) {
            break;
        }
    }

    // Print the result
    if (is_symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0; 
}