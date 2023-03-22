#include "main.h"
/**
 * Prints_alphabet - print all alphabet
 */
void print_alphabet(void)
{
	char l = 'a';
	int i = 0;

	while (i < 10)
	{
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		i++;
	}
}
