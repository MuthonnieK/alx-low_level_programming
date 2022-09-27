#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination memory
 * @src: memory copied from
 * @n: bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m, p = 0;

	while (n > 0)
	{
		dest[m] = src[p];
		m++;
		p++;
		n--;
	}
	return (dest);
}
