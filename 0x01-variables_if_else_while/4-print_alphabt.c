#include <stdio.h>
int main (void)
{
	int alphabet;
	alphabet= 'a';
	while (alphabet <= 'z')
	{
	    if ((alphabet != 'q') && (alphabet != 'e'))

            putchar(alphabet);
            alphabet++;
	}
	putchar('\n');
	return (0);
}
