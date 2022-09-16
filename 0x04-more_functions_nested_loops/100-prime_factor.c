#include "main.h"

/**
 * main - print the largest prime factor of an integer
 * Return: 0 when successful
 */
int main(void)
{
	long int var = 612852475143;
	long int primeFact = 2;

	while (var > 1)
	{
		if (var % primeFact == 0)
			var /= primeFact;
		else
			primeFact++;
	}
	printf("%ld\n", primeFact);
	return (0);
}
