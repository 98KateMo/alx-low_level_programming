#include "main.h"

/**
 * set_bit - will set value of bit at given index 1.
 * @n: pointer to bit.
 * @index: index to set value at - indices start at 0.
 *
 * Return: If error - -1.
 * Otherwise - 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
