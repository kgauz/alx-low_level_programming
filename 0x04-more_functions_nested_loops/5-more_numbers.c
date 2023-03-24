#include "main.h"
#include <stdio.h>
/**
 * Description - prints 10 times the numbers
 * from 0 to 14
 */
void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
