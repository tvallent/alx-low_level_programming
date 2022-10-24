#include "main.h"

/**
 * swap_int - swaps the values of the integers using two input parameters
 *
 * @a: parameter1
 * @b: parameter2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
