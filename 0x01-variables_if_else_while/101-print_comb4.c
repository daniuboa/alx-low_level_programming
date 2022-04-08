#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0
*/

int main(void)
{
	int i, n, j = 0;

	while (j < 10)
	{
		n = 0;

		while (n < 10)
		{
			i = 0;

			while (i < 10)
			{
				if (i != n && n != j && j < n && n < i)
				{
					putchar(j + '0');
					putchar(n + '0');
					putchar(i + '0');

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				i++;
			}
			n++;
		}
		j++;
	}
	putchar('\n');

	return (0);
}
