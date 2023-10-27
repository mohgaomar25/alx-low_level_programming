#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 1 if little-endian, 0 if big-endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian = (char *)&num;

	return (*endian);
}
