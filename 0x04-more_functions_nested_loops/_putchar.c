#include<unistd.h>

/**
*_putchar - Writes the character c to standard output
*@c: The character to print
*
*Return: on success 1
*On error -1 is returnef
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
