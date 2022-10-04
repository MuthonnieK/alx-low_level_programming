#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _strlen(const char *s);

/**
 * *str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0;
	char *outpt;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	a = _strlen(s1);
	b = _strlen(s2);

	outpt = malloc((a + b) * sizeof(*s1) + 1);

	if (outpt == 0)
		return (NULL);
	strcat(outpt, s1);
	strcat(outpt, s2);

	return (outpt);
}
/**
 * _strlen - gets length of string s
 * @s: pointer to string whose length is required
 * Return: length of string
 */
int _strlen(const char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
		;
	return (a);
}
