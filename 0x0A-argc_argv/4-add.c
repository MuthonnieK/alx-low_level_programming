#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: number of actual parameter passed
 * @argv: pointer to the parameter passed
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int a, b, rest = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		rest += atoi(argv[a]);
	}
	printf("%d\n", rest);
	exit(EXIT_SUCCESS);
}
