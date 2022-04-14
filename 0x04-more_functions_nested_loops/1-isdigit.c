#include "main.h"

/**
* _isdigit - checks for a digit (0 through 9)
*
* @c: the digit to be checked
*
* Return: 1 (Success) or 0 (Failure)
*/

int _isdigit(int c)
{
	if (c >= 0 && c  10)
		return (1);
	else 
		return (0);
}
