#include "header.h"

/**
 * main - the core of the program providing the loop required to
 * parse each command sent from stdin.
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
	char **tokens;
	char *line;
	int status;
	int i;

	status = 1;
	sig_catch();
	do {
		prompt();

		line = read_line();

		tokens = parse_line(line);

		for (i = 0; tokens[i]; i++)
		{
			printf("%s\n", tokens[i]);
		}

		free(line);
		free(tokens);

	} while (status);

	return (EXIT_SUCCESS);
}
