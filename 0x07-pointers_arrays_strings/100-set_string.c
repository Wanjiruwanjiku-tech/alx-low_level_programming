#include "main.h"

/**
*set_string - A function that sets the value of a
*double pointer ti a pointer to a char
*@s: The double pointer
*@to: The pointer to char
*
*Return: Void
*/
void set_string(char **s, char *to)
{
	char *new_str = malloc(strlen(to) + 1);
	/* Allocate mem fo new pointer var to 'to'*/

	if (new_str == NULL)
	{
		printf("Error: could not allocate memory");
		_putchar('\n');
	}
	strcpy(new_str, to);
	*s = new_str;
}
