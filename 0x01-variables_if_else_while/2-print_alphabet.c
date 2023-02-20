#include <stdio.h>
/**
*Main - Entry Block
*Description - 'print lowercase a-z'
*Return: Always 0(Success)
*/
int main(void)
{
int n = 97;
while (n <= 122)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
