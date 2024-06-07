#include <stdio.h>
int main() {
    int i, j;
    int rows = 3;
    int cols = 3;
    int matrix1[3][3] = {
        {4, 2, 8},
        {9, 5, 6},
        {5, 8, 9}
    };
    int matrix2[3][3] = {
        {9, 8, 6},
        {3, 7, 9},
        {8, 11, 3}
    };
    int result[3][3]; 
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

}