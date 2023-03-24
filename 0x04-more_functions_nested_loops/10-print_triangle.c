#include "main.h"
/**
 * Description - print triangle
 */
void print_triangle(int size)
{
	int r = 0;

	while (r != size)
	{
		_putchar('#');
		r++;
	}
	if ( size == 0 || size < 0)
	{
		_putchar('\n');
	}
}
