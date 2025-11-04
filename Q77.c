//Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int distinct = 1; // Flag to check if diagonal elements are distinct

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

    // Check for distinct diagonal elements
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0; // Not distinct
                break;
            }
        }
        if (!distinct) {
            break;
        }
    }

    // Print the result
    if (distinct) {
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are not distinct.\n");
    }

    return 0; 
}