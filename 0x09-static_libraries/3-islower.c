 (17 sloc)  213 Bytes
#include "main.h"

/**
* _islower - Shor description, single line
* @c: contains value to be compared
* Return: 0
*/

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
