#include <stdio.h>
/*
 a program that prints all possible combinations of single-digit numbers.
 */
int main(void)
{
   int n = '0';
   while (n <= '9')
   {
       putchar(n);
       if (n != '9')
        
             putchar(',');
            putchar(' ');
        n++;

   }
   putchar('\n');
	return (0);

}
