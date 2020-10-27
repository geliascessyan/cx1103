#include <stdio.h>
char *strncpy_(char *s1, char *s2, int n);

int main() {
    char s1[] = "this is the target string";
    char s2[] = "hello";
    puts(strncpy_(s1, s2, 8)); //returns value of s1
    puts(s1);
    return 0;
}

char *strncpy_(char *s1, char *s2, int n) { //copy n chars from s2 to s1
    int i, end = 0;
    for (i = 0; i < n; i++) {
        switch (end) {
            case 0:
                if (s2[0] != '\0') { //checks if length of s2 is shorter than n
                    *(s1 + i) = *(s2 + i);
                } else {
                    *(s1 + i) = '\0';
                    end = 1;
                }
                break;
            case 1:
                *(s1 + i) = '\0'; //appends '\0'
                break;
        }
    }
    return s1; //returns value of s1
}
