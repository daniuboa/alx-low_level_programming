#include <stdio.h>

/**
* main -This function prints the sizes of different types
* Return: This function returns 0
*/
int main(void)
{
	char c, int i, long li, long long lli, float f;

	printf("Size of a char: %lu bytes(s)\n", sizeof(c));
	print("Size of an int: %lu bytes(s)\n", sizeof(i));
	print("Size of a long int: %lu bytes(s)\n", sizeof(li));
	print("Size of a long long int: %lu bytes(s)\n", sizeof(lli));
	print("Size of a float: %lu bytes(s)\n", sizeof(f));
	return (0);
}
