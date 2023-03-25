#include "main.h"
#include <stdio.h>
/**
 * Description - prints numbers of times the character
 * line should end with \n
 */
void print_line(int n)
{
	if(n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
