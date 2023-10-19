#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - Entry point
 * Description: 'to reallocate memory'
 *
 * @ptr: pointer
 * @size: size
 * Return: 'the new ptr'
 */
void *_realloc(void *ptr, size_t size)
{
	void *new_ptr;
	char *next_ptr;
	char *new_next_ptr;
	size_t dup_size;
	size_t index = 0; /* counter */

	if (size == 0)
	{
		free(ptr);
		return (NULL);
	} /* end if */
	/* we allocate a new block of memory */
	new_ptr = malloc(size);
	/* validate allocation  */
	if (new_ptr == NULL)
	{
		return (NULL);
	} /* end if */
	/* copy contents to new blocks */
	next_ptr = (char *) ptr;
	new_next_ptr = (char *) next_ptr;
	if (size < sizeof(ptr))
	{
		dup_size = size;
	} /* end if */
	else
	{
		dup_size = sizeof(ptr);
	} /* end else */

	for (; index <= dup_size; index++)
	{
		new_next_ptr[index] = next_ptr[index];
	} /* end for */

	free(ptr);

	return (next_ptr);

} /* end function */


