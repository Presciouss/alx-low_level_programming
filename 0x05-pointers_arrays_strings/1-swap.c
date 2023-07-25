#include "main.h"

/**
 * swapt_int - a function that swaps the values of two integers.
 * @a: first
 * @b: second
 *
 *
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
