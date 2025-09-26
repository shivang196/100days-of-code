// Read and print a matrix.

#include <stdio.h>

#define MAX 10

int main() {
    int matrix[MAX][MAX];
    int i, j, rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);


    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("Matrix elements are:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}