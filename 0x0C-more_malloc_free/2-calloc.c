#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it with zeros.
 * @nmemb: The number of elements in the array.
 * @size: The size (in bytes) of each element.
 *
 * Return: A pointer to the allocated and initialized memory,
 *         or NULL if nmemb or size is 0 or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *init_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	init_ptr = (char *)ptr;
	for (i = 0; i < (nmemb * size); i++)
		init_ptr[i] = 0;

	return (ptr);
}
