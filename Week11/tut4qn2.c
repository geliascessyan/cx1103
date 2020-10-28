int unknown(char str[ ], char c)
{
int x, y=0, z=0;
   
for (x=0; str[x] != '\0'; x++)  // iterate through length of string, before '\0'
    if (str[x] != c)            // search for char c in string
    str[y++] = str[x];          // assign char at index [y] with char at index[x]
    else                        // y does not increment when char c is matched, assigned from next index[x]
    z++;                        // increment z when char c is matched, char c is not assigned to index y
str[y] = '\0';                  // ends string with '\0'
       return z;                // returns number of occurances of char c
}                               // function removes all instances of char c from string