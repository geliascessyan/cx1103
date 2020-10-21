#include <stdio.h>

void computeTotal(int numOfLines);

int main() {
    int numOfLines;

    printf("Enter number of lines: \n");
    scanf("%d", &numOfLines);
    computeTotal(numOfLines);
    return 0;
}

void computeTotal(int numOfLines) {
    int n;
    for (n = 1; n <= numOfLines; n++) {
        int i, size, total = 0;
        printf("Enter line %d:\n", n);
        scanf("%d", &size);
        for (i = 0; i < size; i++) {
            int x;
            scanf("%d", &x);
            total += x;
        }
        printf("Total: %d\n", total);
    }
} 
