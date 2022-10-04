#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars,initializes it with a specific char.
 * @size: array size
 * @c: character
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array_alloc = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || array_alloc == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array_alloc[i] = c;

	return (array_alloc);
}
