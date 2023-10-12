#include "function_pointers.h"
/**
 * print_name - function to print a name
 * @name: name value to print
 * @f: fuction to the pointer
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;

	f(name);
}
