#include "main.h"

/**
 * _strcpy - Entry point
 * Description: 'copy strings from src to dest'
 *
 * @dest: 'destination'
 * @src: 'source'
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <= _strlen(src))
	{
		dest[i] = src[i];
		i++;
	} /* end while */
	return (dest);
} /* end function */
