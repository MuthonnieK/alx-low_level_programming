#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program's name
 * @argc: number of actual arguments passed
 * @argv: pointer to the first element in the arguments array
 *
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	exit(EXIT_SUCCESS);
}
