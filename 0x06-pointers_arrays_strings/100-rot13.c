#include <stdio.h>
#include "main.h"

/**
 * rot13 - Function that encodes a tring using rot13.
 * @string: Pointer to string to be encoded.
 *
 * Return: The encoded string.
 */

char *rot13(char *string)
{
	int i = 0, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(string + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(string + i) == alphabet[j])
			{
				*(string + 1) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (string);
}
