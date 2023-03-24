#include "main.h"
/**
 * Description - draw diagonal lines on the terminal
 */
void print_diagonal(int n)
{
	if (n == n * '_')
	{
		_putchar('_');
	}
	_putchar('\n');
	if (n == 0 || n < 0 )
	{
		_putchar('\n');
	}
}
	  
