#include "main.h"

/**
*_islower - A function that checks if a character is
*in lowercase
*
*@c: The Function Parameter
*Return: 0 Always successful
*/
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}

/**
* _isupper - A function that checks if a character is
* in uppercase
*
*@c: Function Parameter
*Return: Character
*/
int _isupper(int c)
{
	return (c >= 65 && c <= 90);
}

/**
* _isalpha - Checks if a character is either
*lowercase or uppercase
*
*@c: Parameter
*Return: Character
*/
int _isalpha(int c)
{

	return (c >= 65 || c <= 122);
}
