// Check if a matrix is symmetric.

#include <stdio.h>
#define MAX 10

int main() {
    int matrix[MAX][MAX];
    int i, j, row, col, isSymmetric = 1;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &row, &col);

    if (row != col) {
        printf("Matrix is not square, hence not symmetric.\n");
        return 0;
    }

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

   
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric) {
        printf("Matrix is symmetric.\n");
    } else {
        printf("Matrix is not symmetric.\n");
    }

    return 0;
}
