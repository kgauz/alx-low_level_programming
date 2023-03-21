#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets lowercase and uppercase'
 * Return: always 0
 */
int main(void)
{
	int p = 97;
	int n = 65;

	while (p <= 122)
	{
		putchar(p);
		p++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
