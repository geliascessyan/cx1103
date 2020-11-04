#include <stdio.h>

int main() {
    char str[10] = "abcdez";
    
    int i;
    for (i=0; str[i]!='\0'; i++) {
        //int ascii = (int)str[i] + 1;
        //char temp = ascii;
        //str[i] = temp;
        if (str[i] == 'z') str[i] = 'a';
        else str[i] = (char)((int)str[i] +1);
    }

    puts(str);
    return 0;
}