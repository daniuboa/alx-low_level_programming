#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to thefirst string to be compared.
 * @s2: A pointer to the second strng to be compared.
 *
 * Return: If str1 < str2, the negative difference of the first unmatched characters.
 * If str1 == str2, 0.
 * If str1 > str2, thepositive difference of the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{

	return (strcmp(s1, s2));
}
