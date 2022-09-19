#include "main.h"

/**
 * _strcpy - copies the pointed string
 * @dest: points buffer
 * @src: points string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');

	return (dest);
}
