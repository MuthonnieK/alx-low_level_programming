#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks the uppercase letter
 * @c: input to be cheked.
 * Return: 1 if uppercase, 0 if lowercase.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
