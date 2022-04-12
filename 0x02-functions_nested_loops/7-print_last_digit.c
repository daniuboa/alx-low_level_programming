#include "main.h"

/**
* print_last_digit - function that computes the absolute valueof an integer
* @n: is the int that will use for the argument of the function
* Return: 0
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = (-1 * (n % 10));
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = (n % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
