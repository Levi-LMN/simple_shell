#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _getline - Entry point
 * Description: 'to read a line of char.'
 *
 * @linePtr: 'pointer to the line'
 * @buff_size: 'buffer'
 * @my_file: 'the file'
 * Return: raed line
 */

ssize_t _getline(char **linePtr, size_t *buff_size, FILE *my_file)
{
	ssize_t bytes_read = 0;
	size_t index = 0;
	ssize_t result;
	char *newSizePtr;

	while (1)
	{
		if (index >= *buff_size)
		{
			*buff_size += 8;
			newSizePtr = _realloc(*linePtr, *buff_size);
			if (newSizePtr == NULL)
			{
				perror("Memory allocation error");
				return (-1);
			} /* End if */
			*linePtr = newSizePtr;
		} /* end if */
		result = read(fileno(my_file), &((*linePtr)[index]), 1);
		if (result == -1)
		{
			perror("Error reading file");
			return (-1);
		} /* end if */
		else if (result == 0)
		{
			break;
		} /* end else if */
		bytes_read++;

		if ((*linePtr)[index] == '\n')
		{
			break;
		} /* end if */

		index++;
	} /* end while */

	return (bytes_read);
} /* end function */
