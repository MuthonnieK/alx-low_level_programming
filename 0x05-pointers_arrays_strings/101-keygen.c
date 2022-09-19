#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password
 * Return: 0 on success
 */
int main(void)
{
	int a, b, m, d;
	char c[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (d != 2772)
	{
		a = m = d = 0;
		while ((2772 - 122) > d)
		{
			b = rand() % 62;
			p[a] = c[b];
			d += c[b];
			a++;
		}
		while (c[m])
		{
			if (c[m] == (2772 - d))
			{
				p[a] = c[m];
				d += c[m];
				a++;
				break;
			}
			m++;
		}
	}
}
