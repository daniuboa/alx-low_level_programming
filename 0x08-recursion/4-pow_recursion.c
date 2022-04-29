#include "main.h"
#include <math.h>

/**
 * _pow_recursion - Function that returns the value of x raised to power y.
 * @x: Parameter for the number
 * @y: Number to be raised to.
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
