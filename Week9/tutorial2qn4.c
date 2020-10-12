#include <stdio.h>
#include <math.h>

double calDistance_cbv(int x1, int x2, int y1, int y2);
double calDistance_cbr(int *x1, int *x2, int *y1, int *y2);

int main() {
    int x1, x2, y1, y2;
    double distance;

    printf("Enter x1: "); scanf("%d", &x1);
    printf("Enter x2: "); scanf("%d", &x2);
    printf("Enter y1: "); scanf("%d", &y1);    
    printf("Enter y2: "); scanf("%d", &y2);

    distance = calDistance_cbv(x1, x2, y1, y2);
    printf("Distance = %.3f (call by value)\n", distance);
    distance = calDistance_cbr(&x1, &x2, &y1, &y2);
    printf("Distance = %.3f (call by reference)\n", distance);
}

// call by value
double calDistance_cbv(int x1, int x2, int y1, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// call by reference
double calDistance_cbr(int *x1, int *x2, int *y1, int *y2) {
    return sqrt(pow(*x2 - *x1, 2) + pow(*y2 - *y1, 2));
}