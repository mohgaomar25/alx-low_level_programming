#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to the pointer whose value needs to be set.
 * @to: Pointer to the value to be set.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
