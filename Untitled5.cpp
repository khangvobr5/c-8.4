#include <stdio.h>

int main() {
    int rows, cols, i, j, max;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("Phan tu tai dong %d, cot %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    max = matrix[0][0];
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong ma tran la: %d\n", max);
    return 0;
}
