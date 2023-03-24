#include "main.h"
#include <stdio.h>
/**
 * Description - prints numbers of times the character
 * line should end with \n
 */
void print_line(int n)
{
	while (n > n * '_')
	{
		_putchar('_');
		n++;
	}
	putchar('\n');
	if(n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
