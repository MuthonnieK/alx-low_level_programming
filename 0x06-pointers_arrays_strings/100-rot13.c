#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: string pointer
 * Return: encoded string
 */
char *rot13(char *s)
{
	int a, b;
	char m[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (m[b] == *(s + a))
			{
				*(s + a) = n[b];
				break;
			}
		}
	}
	return (s);
}
