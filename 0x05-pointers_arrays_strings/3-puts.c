#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string
 * followed by a new line
 * @str: receive string value from main function
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		puts(str);
		str++;
	}
	puts('\n');
}
