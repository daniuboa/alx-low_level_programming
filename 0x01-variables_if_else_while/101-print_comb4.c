#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 
*/

int main(void)
{
	int i, n, j;

	while (j < 10)
	{
		n = 0;

		while (n < 10)
		{
			i = 0;

			while (i < 10)
			{
				if (i !== n && n != j && j < n && n < i)
				{
					putchar('0' + j);
					putchar('0' + n);
					putchar('0' + i);
					
					if (i + n + j != 9 + 8 + 7)
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
	putchar(0);
}
