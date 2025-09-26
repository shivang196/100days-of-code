// Find the sum of all elements in a matrix.

#include <stdio.h>

#define MAX 10

int main() {
    int matrix[MAX][MAX];
    int i, j, rows, cols;
    int sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}