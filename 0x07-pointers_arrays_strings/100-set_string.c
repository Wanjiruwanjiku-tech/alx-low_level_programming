#include "main.h"

/**
*set_string - A function that sets the value of a
*double pointer to a pointer to a char
*@s: The double pointer
*@to: The pointer to char
*
*Return: Void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
