#include "main.h"

/**
 * _strcmp - Entry point
 * Description: 'compares two strings'
 *
 *
 * @str1: 'string 1'
 * @str2: 'stri'
 *
 * Return: 'If str1 is lexicographically less than str2,'
 * 'strcmp returns a negative integer value (usually -1).'
 * 'If str1 is lexicographically greater than str2,'
 * 'strcmp returns a positive integer value (usually 1).'
 * 'If str1 is lexicographically equal to str2,'
 * 'strcmp returns zero.'
 */
int _strcmp(char *str1, char *str2)
{
	int i = 0;
	int len1, len2;

	if (str1 == NULL)
		str1 = ""; /* end if */
	if (str2 == NULL)
		str2 = ""; /* end if */
	len1 = _strlen(str1);
	len2 = _strlen(str2);
	if (len1 > len2)
		return (1); /* end if */
	else if (len1 < len2)
		return (-1); /* end elif */
	while (i < len1)
	{
		if (str1[i] != str2[i])
		{
			return (-1);
		} /* end if */
		i++;
	} /* end while */
	return (0);
} /* end function */
