#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 *
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If thefunction fails or filename is NULL - 0.
 * Otherwise - The actual number of bytes the function
 * can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t wwrite, sz;
	char *buf;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	sz = read(file_descriptor, buf, letters);
	buf[sz] = '\0';

	wwrite = write(STDOUT_FILENO, buf, sz);

	close(file_descriptor);

	free(buf);

	return (wwrite);
}
