#include "main.h"
#include <stdio.h>
/**
 * Description - prints numbers of times the character
 * line should end with \n
 */
void print_line(int n)
{
	int i;

	for (i =0; i < n; i++)
	{
		_putchar('_');
	}
	putchar('\n');
	if(n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
