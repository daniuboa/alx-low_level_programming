#include "main.h"

/**
 * _strlen - Length of a string
 * @str: Input char.
 *
 * Return: The length of @str
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
