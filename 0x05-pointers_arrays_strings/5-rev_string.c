#include "main.h"

/**
*rev_string - A function that takes a pointer to a
*string and reverses it in place
*@s: The pointer
*
*Return: void
*/
void rev_string(char *s)
{
	int len = strlen(s);

	for (int i = 0; i < len / 2; i++)
	{
		char temp = *(s + i);

		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = temp;
	}
}
