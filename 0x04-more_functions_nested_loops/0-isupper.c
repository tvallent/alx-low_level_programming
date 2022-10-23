#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: parameter
 * Return: 0 if successiful
*/

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
