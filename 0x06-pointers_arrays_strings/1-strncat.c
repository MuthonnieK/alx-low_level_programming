#include <string.h>
#include "main.h"

/**
 * _strncat - concates 2 strings and use at most n bytes from src
 * @dest: pointer to string one
 * @src: pointer to string two
 * @n: number of bytes to be concated
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
