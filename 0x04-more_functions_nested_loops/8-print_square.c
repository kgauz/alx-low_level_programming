#include "main.h"
/**
 * Description - prints squares
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('_');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}