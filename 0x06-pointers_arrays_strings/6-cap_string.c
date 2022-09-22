#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: pointer to the string
 * Return: pointer to the str
 */
char *cap_string(char *str)
{
	int a = 0, b, flag;
	char wordSep[] = ",\t;\n; .!?\"(){}";

	do {
		flag = 0;

		if (a == 0)
			flag = 1;
		else
		{
			for (b = 0; wordSep[b] != '\0'; b++)
			{
				if (str[a - 1] == wordSep[b])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1 && str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
		a++;
	} while (str[a] != '\0');
	return (str);
}
