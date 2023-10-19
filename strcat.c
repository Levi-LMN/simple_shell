#include "main.h"

/**
 * _strcat - Entry poiont
 * Description: 'concatenate string'
 *
 * @dest: 'destination'
 * @src: 'source'
 * Return: concartenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	} /* end while */
	while (i < _strlen(src))
	{
		*temp = src[i];
		temp++;
		i++;
	} /* end while */
	*temp = '\0';
	return (dest);
} /* end function */


