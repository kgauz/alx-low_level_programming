#include "main.h"
#include <stdio.h>
/**
 * Description - prints 10 times the numbers
 * from 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=  14; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
