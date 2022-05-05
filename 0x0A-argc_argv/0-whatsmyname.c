#include <stdio.h>

/**
 * main - function
 *
 * @argc: Offset count
 * @argv: Offset value
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
