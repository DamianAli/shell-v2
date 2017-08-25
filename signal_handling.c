#include "header.h"

/**
 * sig_handle - handles the action for a given signal.
 * @sig: A signal number.
 *
 * Return: Void.
 */
void sig_handle(int sig)
{
	switch (sig)
	{
		case SIGINT:
			write(0, "\n$ ", 3); /* placeholder until cd is implemented */
			break;
		case SIGQUIT:
			break;
	}
}

/**
 * sig_catch - catches some signals and sets an action for them.
 *
 * Return: 0 if successful, -1 if failure.
 */
int sig_catch(void)
{
	struct sigaction sa;

	sa.sa_handler = sig_handle;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_RESTART;
	if (sigaction(SIGINT, &sa, NULL) == -1)
	{
		perror("SIGINT");
		return (-1);
	}

	if (sigaction(SIGQUIT, &sa, NULL) == -1)
	{
		perror("SIGQUIT");
		return (-1);
	}

	return (0);
}
