#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: number of actual parameter passed to main
 * @argv: pointer to the first element
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (argc-- > 1)
		count++;

	(void)(*argv);

	printf("%d\n", count);
	exit(EXIT_SUCCESS);
}
