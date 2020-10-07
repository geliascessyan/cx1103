#include <stdio.h>

int main() {
    double x, sum=1.0;
    printf("Enter x value: ");
    scanf("%lf", &x);

    for (int n=1; n<=30; n++) {
        double numerator = 1.0, denominator = 1.0;
        for (int power=1; power<=n; power++) {
            numerator *= x;
        }
        for (int p=1; p<=n; p++) {
            denominator *= p;
        }
        //printf("n number is %d\n", n);
        //printf("numerator is %lf\n",numerator);
        //printf("denominator is %lf\n",denominator);
        sum += numerator/denominator;

    }
    printf("Result is %.8lf",sum);

    return 0;
}
