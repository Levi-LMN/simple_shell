#include "main.h"

/**
 * check_path - Entry point
 *
 * Descritpion: 'checks for path'
 *
 * @path: 'path'
 * Return: 1 - true & 0 - false
 */
int check_path(char *path)
{
	struct stat buff;

	return ((stat(path, &buff) == 0));
} /* End function */


