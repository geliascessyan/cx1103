#include <stdio.h>
#include <string.h>

char *sweepSpace1(char *str);
char *sweepSpace2(char *str);
char *sweepSpace3(char *str);

int main() {
    char str[80], str2[80], str3[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p=strchr(str,'\n')) *p = '\0';  
    strcpy(str2,str);
    strcpy(str3,str);
    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str2));
    printf("sweepSpace2(): %s\n", sweepSpace3(str2));
    return 0;
    }

char *sweepSpace1(char *str) { //using array indexing
    int old_i, new_i;

    for (old_i = new_i = 0; str[old_i] != '\0'; old_i++) {
        if (str[old_i] != ' ') {
            str[new_i] = str[old_i];
            new_i++;
        }
    }

    str[new_i] = '\0';

    return str;
}

char *sweepSpace2(char *str) { //using pointer variable assigned to array
    char *old_i, *new_i;

    for (old_i = new_i = str; *old_i != '\0'; old_i++) {
        if (*old_i != ' ') {
            *new_i = *old_i;
            new_i++;
        }
    }

    *new_i = '\0';

    return str;
}

char *sweepSpace3(char *str) { //using pointer for (array address + index)
    int old_i, new_i;

    for (old_i = new_i = 0; *(str + old_i) != '\0'; old_i++) {
        if (*(str + old_i) != ' ') {
            *(str + new_i) = *(str + old_i);
            new_i++;
        }
    }

    *(str + new_i) = '\0';

    return str;
}
