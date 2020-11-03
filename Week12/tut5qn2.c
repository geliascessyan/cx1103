#include <stdio.h>

typedef struct {
    float operand1, operand2;
    char op;    /* operator ‘+’,‘‐’,‘*’ or ‘/’  */
} bexpression;

float compute1(bexpression expr);
float compute2(bexpression *expr);

int main() {
    bexpression exp = {2, 2, .op='/'};
    printf("compute1 = %.2lf\n", compute1(exp));
    printf("compute2 = %.2lf\n", compute2(&exp));
    return 0;
}

//(a)
float compute1(bexpression expr) {
    switch (expr.op) {
        case '+':
            return expr.operand1 + expr.operand2;
            break;
        case '-':
            return expr.operand1 - expr.operand2;
            break;
        case '*':
            return expr.operand1 * expr.operand2;
            break;
        case '/':
            return expr.operand1 / expr.operand2;
            break;
        default:
            break;
    }
}

//(b)
float compute2(bexpression *expr) {
    switch (expr->op) {
        case '+':
            return expr->operand1 + expr->operand2;
            break;
        case '-':
            return expr->operand1 - expr->operand2;
            break;
        case '*':
            return expr->operand1 * expr->operand2;
            break;
        case '/':
            return expr->operand1 / expr->operand2;
            break;
        default:
            break;
    }
}