#include "header.h"

/**
 * prompt - prints a prompt signifying the program is
 * standing by for commands.
 *
 * Return: Void.
 */
void prompt(void)
{
	struct stat st;

	if (fstat(0, &st) == -1)
	{
		perror("fstat");
	}

	if (!S_ISFIFO(st.st_mode))
	{
		write(0, "$ ", 2);
	}
}
