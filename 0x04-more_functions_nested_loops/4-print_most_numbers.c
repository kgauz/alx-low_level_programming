#include "main.h"
#include <stdio.h>
/**
 * Description - prints numbers from 0 to 9
 * followed by a new line
 */
void print_most_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		if ( i ==  4 || i == 2)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
