#include <stdio.h>

int main() {
    char *str = "hello";

    *(str+1) = 'a'; //error
    puts(str);

    return 0;
}

//c string initialized through a character pointer cannot be modified.

