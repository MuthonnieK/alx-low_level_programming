#include "main.h"

/**
 *  _strspn -  gets the length of a prefix substring.
 * @s: the string
 * @accept: cotains bytes
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int y, z;
	unsigned int l = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (z = 0; accept[z] != '\0' && accept[z] != s[y]; z++)
			;
		if (s[y] == accept[z])
			l++;
		if (accept[z] == '\0')
			return (l);
	}
	return (l);
}
