#include "main.h"

/**
 * _strdup - Entry point
 * Description: 'duplicate a string'
 *
 * @str: 'string'
 * Return: returns a pointer to a newly allocated memory
 * block containing a duplicate of the input string
 */
char *_strdup(char *str)
{
	char *myStr;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	} /* end if */
	myStr = (char *)malloc(strlen(str) * sizeof(char) + 1);
	if (myStr == NULL)
	{
		return (NULL);
	} /* end if */
	while (i <= (int)strlen(str))
	{
		myStr[i] = str[i];
		i++;
	} /* end if */
	return (myStr);
} /* end function */
