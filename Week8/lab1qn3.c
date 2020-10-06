#include <stdio.h>

int main() {
    int height;
    printf("Enter pattern height: ");
    scanf("%d", &height);
    for (int width = 1; width <= height; width++) {
        //printf("width is %d\n",width);
        int value = (width%3 != 0) ? width%3 : 3;
        for (int index = 0; index < width; index++) {
            printf("%d", value);
        }
        putchar('\n'); 
    }
    return 0;
}