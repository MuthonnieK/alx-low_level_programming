#include "main.h"

/*
 *
 * print_alphabet_x10 - the function that will print the alphabet 10 times
 *
 */
void print_alphabet_x10(void) /*prototype contained in main.h*/
{
	int round, ch;
	for (round = 0; round <= 9; ++round)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
		_putchar('\n');
	}
}
