#include <unistd.h>
/**
 * _putchar -writes the charater c to stdout
 * @c: The character to print
 * Return: 1, success 1
 * On error -1 is returned, and error is then returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
