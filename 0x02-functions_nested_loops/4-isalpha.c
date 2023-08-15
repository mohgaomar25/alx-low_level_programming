#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: character checker.
 * Return: 1 if c is an alphabetic character,else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
