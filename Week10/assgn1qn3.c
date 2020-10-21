#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
    int data[SIZE][SIZE];
    int i,j;
    int rowSize, colSize;

    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    int zero, ones, i, j;
    for (i = 0; i < rowSize; i++) {
        //reset
        zero = ones = 0;
        for (j = 0; j < colSize; j++) {
            //check for zeroes
            if (data[i][j] == 0) {
                zero++;
                //print compressed ones
                if (ones != 0) {
                    printf("1 ");
                    printf("%d ", ones);
                    ones = 0;
                }
            //check for ones
            } else if (data[i][j] == 1) {
                ones++;
                //print compressed zeroes
                if (zero != 0) {
                    printf("0 ");
                    printf("%d ", zero);
                    zero = 0;
                }
            }
        }
        //print compression at end of row
        if (ones != 0) {
            printf("1 ");
            printf("%d ", ones);
            ones = 0;
        } else if (zero != 0) {
            printf("0 ");
            printf("%d ", zero);
            zero = 0;
        }
        putchar('\n');
    }
} 