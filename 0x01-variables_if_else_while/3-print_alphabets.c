#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{	char c;
	char d;
	c = 'a';
	d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
