#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print base 10 numbers from 0
 * Return: always 0
 */
int main(void)
{
	int p = 0;

	while (p < 10)
	{
		printf("%d", p);
		p++;
	}
	printf("\n");
	return (0);
}
