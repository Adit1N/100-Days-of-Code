//Perform diagonal traversal of a matrix.


#include <stdio.h>
int main() {
    int rows, cols, i, j;

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
        }
    }

    // Perform diagonal traversal
    printf("Diagonal traversal of the matrix is:\n");
    for (i = 0; i < rows + cols - 1; i++) {
        for (j = 0; j <= i; j++) {
            int k = i - j;
            if (j < rows && k < cols) {
                printf("%d ", matrix[j][k]);
            }
        }
    }
    printf("\n");

    return 0; 
}