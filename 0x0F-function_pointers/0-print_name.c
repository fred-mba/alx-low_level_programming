#include "function_pointers.h"

/**
 *print_name - prints name
 *@name: name string pointer
 *@f: fuction pointer
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
