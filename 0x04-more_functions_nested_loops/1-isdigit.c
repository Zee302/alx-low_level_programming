#include "main.h"
/**
* _isdigit - Check for a digit (0 through 9)
* @i: The number to be checked
*
* Return: 1 if i is a digit
*/
int _isdigit(int i)
{
if (i >= 48 && i <= 57)
{
return (1);
}
return (0);
}
