#include "main.h"

/**
 * _strlen - Entry point
 * Description: 'find the string lenght'
 *
 * @str: 'string'
 * Return: lenght of string
 */

int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		str = ""; /* end if */
	while (*str != '\0')
	{
		i++;
		str++;
	} /* end while */
	return (i);
} /* End function */

