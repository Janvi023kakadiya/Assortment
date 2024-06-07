#include <stdio.h>
int main() {
    int i, j;
    int size = 3; 
    int matrix[3][3] = {
        {31, 22, 36},
        {42, 53, 65},
        {27, 18, 29}
    };
    int sum = 0; 
    for (i = 0; i < size; i++) {
        sum += matrix[i][i]; 
    }
    printf("Sum of diagonal elements: %d\n", sum);
}
