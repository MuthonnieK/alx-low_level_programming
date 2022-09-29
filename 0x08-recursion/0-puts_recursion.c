#include "main.h"
#include <string.h>

/**
 * _puts_recursion -  prints a string
 * @s: string pointer
 */
void _puts_recursion(char *s)
{
	if (strlen(s) < 1)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
