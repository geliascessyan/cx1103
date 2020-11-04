	/*edit*/

/*custom header*/

	/*end_edit*/
#include <stdio.h>
#include <string.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
   char str[50], *p;
   int totVowels, totDigits;

   printf("Enter the string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0'; 
   processString(str, &totVowels, &totDigits);   
   printf("Total vowels = %d\n", totVowels);
   printf("Total digits = %d\n", totDigits);
   return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
    int i;
    char test[100] = "_";
    strcat(test, str);

    *totVowels = *totDigits = 0;
    for (i = 1; test[i] != '\0'; i++) {
        /*find vowels*/
        if (strchr("aeiouAEIOU", test[i]) != NULL) (*totVowels)++;
        /*find digits*/
        if (strchr("0123456789", test[i]) != NULL) (*totDigits)++;
    }
}