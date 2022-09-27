#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in haystack
 * @haystack: string
 * @needle: string
 * Return: ponter to tye beginning or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *m = haystack;
	char *n = needle;

	while (*m)
	{
		n = needle;
		m = haystac;
		while (*n)
		{
			if (*m == *n)
			{
				n++;
				m++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystac++;
	}
	return (0);
}
