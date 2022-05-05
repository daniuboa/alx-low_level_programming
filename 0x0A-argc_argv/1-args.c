#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints thenumber of args passed to it.
 *
 * @argc: Number of arguments passed to the function.
 * @argv: Argument vector of pointers to strings.
 *
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
