#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print a chess board
 * @a: pointer to the elemnt
 */
void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
			printf("%c", a[m][n]);
		putchar('\n');
	}
}
