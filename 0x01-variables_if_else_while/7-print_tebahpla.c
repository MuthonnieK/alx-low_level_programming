#include <stdio.h>
/*
 a program that prints the lowercase alphabet in reverse, followed by a new line.
 */
int main(void)
{
	char n = 'z';
	while (n >= 'a')
        {
        putchar(n);
        n--;
	}
	putchar('\n');
	return (0);

}
