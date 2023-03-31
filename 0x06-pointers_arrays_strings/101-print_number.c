#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integers
 * @n: contain values
 */
void print_number(int n)
{
	unsigned int a;

	a = n;
	if ( n < 0)
	{
		_putchar('-');
		a = -a;
	}
	if ( a / 10 != 0)
	{
		print_number(a/10);
	}
	_putchar( (a % 10) + '0');
}

