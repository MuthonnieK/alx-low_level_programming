#include <stdio.h>
#include <stdlib.h>

/**
 * main -  main function
 * @argc: arguments number passed
 * @argv: first element pointer
 * Return: on succes 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	exit(EXIT_SUCCESS);
}
