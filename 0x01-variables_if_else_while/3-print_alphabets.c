#include <stdio.h>
/**
*Main - Entry Block
*Description : 'Prints the alphabet in lowercase and then in uppercase
*Return : 0
*/
int main(void)
{
char lower = 'a';
char upper = 'A';
while
(lower <= 'z');
{
putchar (lower);
lower++;
} while
(upper <= 'Z');
{
putchar (upper);
upper++;
}
putchar ('\n');
return (0);
}
