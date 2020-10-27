#include  <stdio.h>
#include  <string.h>
#define  M1  "How are ya, sweetie?"
char M2[40] = "Beat the clock.";
char *M3 = "chat";
int main()
{
char words[80];
printf(M1);                                             // print "How are ya, sweetie?" without '\n'
puts(M1);                                               // print "How are ya, sweetie?" with '\n'
puts(M2);                                               // print "Beat the clock."
puts(M2+1);                                             // print "eat the clock.", starts from index 1
gets(words); /* user inputs :  win a toy. */            // store "win a toy." in words
puts(words);                                            // print "win a toy."
scanf("%s", words+6); /* user inputs :  snoopy. */      // store "snoopy." at words[6], replacing "toy.   "
puts(words);                                            // print "win a snoopy."
words[3] = '\0';                                        // shorten string to index 3
puts(words);                                            // print "win"
while (*M3)  puts(M3++);                                // for index of M3, print M3 from index 0 to -2
puts(--M3);                                             // print from index -2 of M3, "t\0"
puts(--M3);                                             // print from index -3 of M3, "at\0"
M3 = M1;                                                // M3 points to M1
puts(M3);                                               // print M3 = M1, "How are ya, sweetie?"
return 0;
}
