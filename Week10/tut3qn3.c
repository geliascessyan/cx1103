#include <stdio.h>
#define SIZE 4

void transpose2D(int ar[][SIZE], int rowSize, int colSize);

int main() {
    int ar[][SIZE] = {1, 2, 3, 4,
                      1, 1, 2, 2,
                      3, 3, 4, 4,
                      4, 5, 6, 7};
    transpose2D(ar, SIZE, SIZE);
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

void transpose2D(int ar[][SIZE], int rowSize, int colSize) {
    int h, k, temp;
    for (h = 0; h < rowSize; h++) {
        for (k = 0; k < h; k++) {
            temp = ar[h][k];
            ar[h][k] = ar[k][h];
            ar[k][h] = temp;
        }
    }
}