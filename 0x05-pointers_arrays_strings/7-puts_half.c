#include "main.h"
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: receive string value from main
 */
void puts_half(char *str)
{
	int n, length_of_the_string, i;

	length_of_the_string = strlen(str);
	n = (length_of_the_string - 1) / 2;
	i = n;
	while (i  <= length_of_the_string)
	{
		puts(str[i]);
		i++;
	}
	if (!(length_of_the_string % 2))
	{
		puts(*str % 10);
	}
}
