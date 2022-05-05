#include "main.h"

/**
 * _isdigit - checks for a digit (0 throgh 9)
 *
 * @c: the digit to be checked
 *
 * Return: 1 (success) or 0 (Failure)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
