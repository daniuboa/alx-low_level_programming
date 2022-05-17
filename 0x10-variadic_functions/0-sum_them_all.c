#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Sum of all its parameters
 *
 * @n: Total number of parameters
 *
 * Return: Sum of value parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(list, n);
	if (n != 0)
		for (i = 0; i < n; sum += va_arg(list, unsigned int), i++);
	
	va_end(list);

	return (sum);
}
