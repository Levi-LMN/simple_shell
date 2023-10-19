#include "main.h"

/**
 * _getenv - get an environment variable given name
 * @name: name of environment variable
 * Return: environment variable value on success
 */
char *_getenv(char *name)
{
	int namelen = _strlen(name);
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		if (_strncmp(name, environ[i], namelen) == 0 && environ[i][namelen] == '=')
		{
			return (environ[i] + namelen + 1);
		}
	}

	return (NULL);
}
