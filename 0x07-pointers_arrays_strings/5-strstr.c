#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring to be located
 * Return: located substring or null if absent.
 */
char *_strstr(char *haystack, char *needle)
{
	char *m = haystack;
	char *n = needle;

	while (*m)
	{
		n = needle;
		m = haystack;
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
		haystack++;
	}
	return (0);
}
