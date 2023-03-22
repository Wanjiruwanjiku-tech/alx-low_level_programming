#include "function_pointers.h"

/**
*print_name - A Function that prints a Name
*@name: A pointer to a string representing the name to print
*@f: A Function pointer that takes one argument and returns void
*
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL) /*check if the string is null*/
	{
		return; /*if true returrn nothing*/
	}

	f(name); /*call the function to print the name*/
}
