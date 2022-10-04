#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: pointer to char
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int size = 0;
	char *str_copy;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	str_copy = malloc(size * sizeof(*str) + 1);

	if (str_copy == 0)
		return (NULL);

	strcpy(str_copy, str);
	return (str_copy);
}
