#include "main.h"

/**
 * get_bit - gets value of bit at given index.
 * @n: the bit itself.
 * @index: index to get value at - indice start at 0.
 *
 * Return: If error - -1.
 * Otherwiaw - vlaue of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
