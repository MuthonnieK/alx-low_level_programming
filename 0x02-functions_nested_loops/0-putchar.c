#include "main.h"
#include <string.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/*Description: prints _putchar using putchar prototype*/
int main(void)
{	
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
	_putchar(str[ch]);
	_putchar('\n');

	return (0);
}