#include "main.h"

/**
* print_lastdigit - last digit
*
* @n: The int to print
* Return: 0
*/

int prnt_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (n % 10);
		_puchar(last_digit);
	}
}
