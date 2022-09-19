#include "main.h"

/**
 * print_rev -prints string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int a = '\0';

	for (s[a] = '\0'; s[a] >= 0; s[a]--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
