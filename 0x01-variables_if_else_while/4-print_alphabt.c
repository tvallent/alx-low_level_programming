#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*Return: 0
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' || c != 'q') 
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
