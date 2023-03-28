#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a tring in reverse
 * followed by a new line
 * @s: receive string value from main
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
