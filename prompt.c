#include "main.h"

/**
 * handle_prompt - prints prompt and gets input
 * @length: length of input
 * @line: user input stored
 * Return: void
 */
int handle_prompt(size_t *length, char **line)
{
	ssize_t bytes_read;
	char newline = '\n';
	int is_interactive = isatty(STDIN_FILENO);

	if (is_interactive)
	{
		write(STDOUT_FILENO, "$ ", 2);
	} /* end if */
	bytes_read = getline(line, length, stdin);
	if (bytes_read == -1)
	{
		if (is_interactive)
		{
			write(STDOUT_FILENO, &newline, 1);
		} /* end if */
	return (1);
	} /* end if */
	return (0);
} /* end function */

