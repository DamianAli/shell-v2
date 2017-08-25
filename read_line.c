#include "header.h"

/**
 * read_line - reads a line from stdin to return it.
 *
 * Return: A line from stdin.
 */
char *read_line(void)
{
	size_t n;
	char *line;

	n = 0;
	line = NULL;
	if (getline(&line, &n, stdin) == -1)
	{
		free(line);
		exit(EXIT_FAILURE);
	}

	return (line);
}
