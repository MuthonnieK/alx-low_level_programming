#include "main.h"

int check_prime(int n, int resp);

/**
 * is_prime_number - checks whether n is prime
 * @n: integer
 * Return: 1 if true, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - checks for prime no.
 * @n: integer
 * @resp: integer
 * Return: integer
 */
int check_prime(int n, int resp)
{
	if (resp >= n && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}
