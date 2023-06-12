#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - will read text file and print to to POSIX stdout
 * @filename: pointer to name of file
 * @letters: number of letters function should read and print
 *
 * Return: If function fails or function NULL - 0.
 * Otherwise - actual number of bytes function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}


