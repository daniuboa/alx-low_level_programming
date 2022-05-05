#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints the name of the program.
 *
 * @argc: Number of arguments passed to the function.
 * @argv: argument vector of pointers to strings.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
