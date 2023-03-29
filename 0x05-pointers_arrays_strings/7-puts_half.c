#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: receive string value from main
 */
void puts_half(char *str)
{
	int n, length_of_the_string, i;

	length_of_the_string = strlen(str);
	n = (length_of_the_string )  / 2;
	i = n;
	while (i  <= length_of_the_string)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
