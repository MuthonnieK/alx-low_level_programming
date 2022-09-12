#include <stdio.h>
/*
 a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 */
int main(void)
{
    int n = '0';
    while (n <='9')
    {
        putchar(n);
        n++;
    }
    n = 'a';
    while (n<='f')
    {
        putchar (n);
        n++;
    }
	return (0);

}
