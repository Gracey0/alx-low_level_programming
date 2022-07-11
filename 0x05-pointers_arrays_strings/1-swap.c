#include "main.h"

/**
 * swap_int- a function that swipes the value of two integers
 * @a: input 1
 * @b: input 2
 * return: integers
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
