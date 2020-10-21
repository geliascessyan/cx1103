#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n, array[10]; //static var initialized to 0
void getdist(int n);
void printhist(int array[]);

int main() {
    srand(time(0));
    printf("Enter n integers to generate: ");
    scanf("%d", &n);
    while (getchar() != '\n');
    getdist(n);
    printhist(array);
    return 0;
}

void getdist(int n) {
    int i, r;
    for (i = 0; i < n; i++) {
        int randint = rand() % 100;
        for (r = 0; r < 10; r++) {
            if (randint >= (r * 10) && randint <= (r * 10 + 9)) {
                array[r]++;
            }
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
