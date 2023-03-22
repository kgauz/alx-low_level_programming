#include <stdio.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabet
 * Return: always 0
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
}
