#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string to another
 * @dest: pointer to the 1st string
 * @src: pointer to te 2nd string
 * @n: string size being copied
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
