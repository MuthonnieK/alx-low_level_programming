#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: the resu;t
 * @size_r: lenth of the result
 * Return: the sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, c, d = 0, f, g, h = 0;

	while (n1[a] != '\0')
		a++;
	while (n2[b] != '\0')
		b++;
	if (a > b)
		d = a;
	else
		d = b;
	if (d + 1 > size_r)
		return (0);
	r[d] = '\0';
	for (c = d - 1; c >= 0; c--)
	{
		a--;
		b--;
		if (a >= 0)
			f = n1[a] - '0';
		else
			f = 0;
		if (b >= 0)
			g = n2[b] - '0';
		else
			g = 0;
		r[c] = (f + g + h) % 10 + '0';
		h = (f + g + h) / 10;
	}
	if (h == 1)
	{
		r[d + 1] = '\0';
		if (d + 2 > size_r)
			return (0);
		while (d-- >= 0)
			r[d + 1] = r[d];
		r[0] = h + '0';
	}
	return (r);
}
