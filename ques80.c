// Multiply two matrices.


#include <stdio.h>
#define MAX 10

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], product[MAX][MAX];
    int n, i, j, k;

    printf("Enter the size of the matrices (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            product[i][j] = 0;
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The product of the matrices is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
