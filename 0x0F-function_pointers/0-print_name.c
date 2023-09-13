#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - print name
 * @name:  name
 * @f: pointer of function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);

}
