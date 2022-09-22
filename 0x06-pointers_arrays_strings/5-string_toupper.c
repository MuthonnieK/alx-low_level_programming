#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *string_toupper - convert lowercase to uppercase
 * @str: pointer to the string
 * Return: pointer to the string converted
 */
char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
	}
	return (str);
}
