#include "main.h"
#include <string.h>

/**
 * _strlen_recursion -  returns the length of a string.
 * @s: string
 * Return: the lngth
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s > '\0')
		c += _strlen_recursion(s + 1) + 1;
	return (c);
}
