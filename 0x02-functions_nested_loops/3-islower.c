#include "main.h"

/**
 * _islower - checks for lower case character
 *
 * @c: checks the input of the function
 *
 * Return: 1 if c is lowercase and 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
