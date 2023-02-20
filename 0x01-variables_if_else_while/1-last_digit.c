#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Determines if last digit, is > 5, = to zero or < 6
*return: Always 0 (Success)
*/
int main(0)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %i is %i and is", n, (n % (10)));
if ((n % 10) == 0)
{
printf("0\n");
}
else if ((n % 10) > 5)
{
printf("greater than 5\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
