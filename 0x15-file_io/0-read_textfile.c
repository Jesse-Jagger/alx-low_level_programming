#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tuf;
	ssize_t ad;
	ssize_t v;
	ssize_t t;

	ad = open(filename, O_RDONLY);
	if (ad == -1)
		return (0);
	tuf = malloc(sizeof(char) * letters);
	v = read(ad, tuf, letters);
	t = write(STDOUT_FILENO, tuf, t);

	free(tuf);
	close(ad);
	return (v);
}
