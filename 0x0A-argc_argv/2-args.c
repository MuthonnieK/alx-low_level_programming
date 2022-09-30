#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments passed
 * @argc: number of actual parameter passed
 * @argv: pointer to the first element passed
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (argc--)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	exit(EXIT_SUCCESS);
}
