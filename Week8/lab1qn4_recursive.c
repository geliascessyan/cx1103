#include <stdio.h>

double exponent(double x, double p);

int main() {

    //get exponent value from user input
    double x = -33.3, p = -1.0;
    printf("Enter exponent value (-20 to 20): ");
    scanf("%lf", &x);
    while ((getchar()) != '\n');
    
    while (x < -20 || x > 20) {
        printf("Invalid input!\n\n"); 
        printf("Enter exponent value (-20 to 20): ");
        scanf("%lf", &x);
        while ((getchar()) != '\n');
    }
    
    //get precision level from user input
    printf("Enter precision level (1 to 100): ");
    scanf("%lf", &p);
    while ((getchar()) != '\n');

    while (p < 1 || p > 100) {
        printf("Invalid input!\n\n"); 
        printf("Enter precision level (1 to 100): ");
        scanf("%lf", &p);
        while ((getchar()) != '\n');
    }
    
    //call exponent function
    double result = exponent(x, p);
    printf("%.10lf", result);
    
    return 0;
}

double exponent(double x, double p) {
    if (p <= 1) {
        return 1.0 + x;
    } else {
        double numerator = 1.0;
        for (int i = 1; i <= p; i++) {
            numerator *= x;
        }
        double denominator = 1.0;
        for (int i = 1; i <= p; i++) {
            denominator *= i;
        }
        double result = numerator/denominator;
        return result + exponent(x, p-1);
    }
}
