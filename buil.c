#include "main.h"

/**
 * check_builtins - check for builtins
 *
 * @cnt: number of arguments passed in shell
 * @tokens: list of shell arguments
 * @argv: command line arguments array
 * @exit_status: exit status
 * Return: void
 */
int check_builtins(int cnt, char **tokens, int *exit_status, char **argv)
{
	char **env = environ;
	char newline = '\n';

	if (cnt < 1)
	{
		return (2);
	}
	if (strcmp(tokens[0], "exit") == 0)
	{
		if (tokens[1] != NULL)
		{
			if (atoi(tokens[1]))
				if (atoi(tokens[1]) >= 0)
					*exit_status = _atoi(tokens[1]);
				else
					error_message(tokens, argv, exit_status);
			else
			{
				error_message(tokens, argv, exit_status);
			}
		}
		return (1);
	}
	if (strcmp(tokens[0], "env") == 0)
	{
		env = environ;
		while (*env != NULL)
		{
			write(STDOUT_FILENO, *env, strlen(*env));
			write(STDOUT_FILENO, &newline, 1);
			env++;
		}
		return (2);
	}
	if (strcmp(tokens[0], "unsetenv") == 0)
	{
		_unsetenv(tokens[1]);
		return (2);
	}
	return (0);
}
