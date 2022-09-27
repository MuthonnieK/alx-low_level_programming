#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @b: bytes of the memory pointed to
 * @n: bytes filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}
	return (s);
}

