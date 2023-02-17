#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*main - print lowercase a-z
*Return: Always 0(Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
 {
char alpha = 'a';

while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');

return (0);
}
