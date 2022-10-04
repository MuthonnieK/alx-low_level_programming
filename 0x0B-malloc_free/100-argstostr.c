#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets legth of string
 * @s: te strimg
 * Return: an integer
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: int
 * @av: argument
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int m = 0, nc = 0, k = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; m < ac; m++, nc++)
		nc += _strlen(av[m]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (k = 0; av[m][k] != '\0'; k++, cmpt++)
			s[cmpt] = av[m][k];
		s[cmpt] = '\n';
		cmpt++
	}
	s[cmpt] = '\0';

	return (s);
}
