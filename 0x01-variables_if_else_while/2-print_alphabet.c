#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - print lowercase a-z
*Return: Always 0(Success)
*/
int main()
{
srand(time(0));
n = rand() - RAND_MAX / 2;
char ch = 'a';
while (ch <= 'z')
{
putchar("%c",ch);
ch++;
}
putchar('\n');
return (0);
}
