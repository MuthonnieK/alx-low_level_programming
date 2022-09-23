#include "main.h"
#include <string.h>

/**
 * *leet - encodes a string into 1337.
 * @s: pointer to string
 * Return: pointer to s
 */
char *leet(char *s)
{
	int a = 0, b;
	char testCase1[] = "aeotl";
	char testCase2[] = "AEOTL";
	char valid[] = "43071";

	while (s[a] != '\0')
	{
		for (b = 0; valid[b] != '\0'; b++)
		{
			if (s[a] == testCase1[b] || s[a] == testCase2[b])
			{
				s[a] = valid[b];
				break;
			}
		}
		a++;
	}
	return (s);
}
