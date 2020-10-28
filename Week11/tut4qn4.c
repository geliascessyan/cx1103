#include <stdio.h>
int stringcmp(char *s1, char *s2);

int main() {
    char s1[] = "test";
    char *s2 = "tEst";
    printf("%d\n", stringcmp(s1, s2));
    return 0;
}

int stringcmp(char *s1, char *s2) {
    int n = 0;

    while (1) {
        if (s1[n] == s2[n] && s2[n] == '\0') { //strings are equal
            return 0;
        } else if (s1[n] > s2[n]) { //s1 is larger
            return 1;
        } else if (s1[n] < s2[n]) { //s1 is smaller
            return -1;
        }
        n++;
    }
}