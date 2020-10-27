#include <stdio.h>
int stringcmp(char *s1, char *s2);

int main() {
    char s1[] = "test";
    char *s2 = "test";
    printf("%d\n", stringcmp(s1, s2));
    return 0;
}

int stringcmp(char *s1, char *s2) {
    int result, n = 0;

    while (1) {
        if (s1[n] == s2[n] && s2[n] == '\0') { //strings are equal
            result = 0;
            break;
        } else if (s1[n] > s2[n]) { //s1 is larger
            result = 1;
            break;
        } else if (s1[n] < s2[n]) { //s1 is smaller
            result = -1;
            break;
        }
        n++;
    }

    return result;
}