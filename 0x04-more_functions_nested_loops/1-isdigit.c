#include "main.h"
/**
* _isdigit - Check for a digit (0 through 9)
* @i: Digit to be checked
*
* Return: 1 if true, 0 if false
*/
int _isdigit(int i)
{
if (i >= '0' && i <= '9')
return (1);
return (0);
}
