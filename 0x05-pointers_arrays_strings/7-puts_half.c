#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int a;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
			_putchar (str[a]);
		a++;
	}
	_putchar('\n');
}
