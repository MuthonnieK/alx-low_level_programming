#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: takes input of function
 *
 * Return: 1 if c is a letter and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
