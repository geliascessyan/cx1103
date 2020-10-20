#include <stdio.h>
#define SIZE 4

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);

int main() {
    int ar[][SIZE] = {4, 3, 8, 6,
                      9, 0, 6, 5,
                      5, 1, 2, 4,
                      9, 8, 3, 7};
    reduceMatrix2D(ar, SIZE, SIZE);
    {
        int i, j;
        for (i = 0; i < SIZE; i++) {
            for (j = 0; j < SIZE; j++) {
                printf("%3d", ar[i][j]);
            }
            putchar('\n');
        }
    }
    return 0;
}

void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize) {
    int i, j;
    for (i = 0; i < rowSize; ++i) {
        for (j = i + 1; j < colSize; ++j) {
            ar[i][i] += ar[j][i];
            ar[j][i] = 0;
        }
    }
}