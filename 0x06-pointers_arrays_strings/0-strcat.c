#include <string.h>
#include "main.h"

/**
 * _strcat - function that concates two strings
 * @dest: first string pointer
 * @src: second string pointer
 * Return: a pointer to the result string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
