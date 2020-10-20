#include <stdio.h>
#include <stdlib.h>

int n, array[10]; //static var initialized to 0
void getdist(int n);
void printhist(int array[]);

int main() {
    printf("Enter n integers to generate: ");
    scanf("%d", &n);
    printf("Debug: n is %d\n", n);
    while (getchar() != '\n' );
    getdist(n);
    printhist(array);
    return 0;
}

void getdist(int n) {
    printf("Debug: n is %d\n", n);
    int i;
    for (i = 0; i < n; i++) {
        int randint = rand() % 100;
        switch (randint) {
            case 0 ... 9:
                array[0]++;
                break;
            case 10 ... 19:
                array[1]++;
                break;
            case 20 ... 29:
                array[2]++;
                break;
            case 30 ... 39:
                array[3]++;
                break;
            case 40 ... 49:
                array[4]++;
                break;
            case 50 ... 59:
                array[5]++;
                break;
            case 60 ... 69:
                array[6]++;
                break;
            case 70 ... 79:
                array[7]++;
                break;
            case 80 ... 89:
                array[8]++;
                break;
            case 90 ... 99:
                array[9]++;
                break;
        }
    }
}

void printhist(int array[]) {
    int h, k;
    for (h = 0; h < 10; h++) {
        printf("%2d-%2d   |", h * 10, h * 10 + 9);
        for (k = 0; k < array[h]; k++) {
            putchar('*');
        }
        putchar('\n');
    }
}
