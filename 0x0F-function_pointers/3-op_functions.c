#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*op_add - A Function that adds two integers
*@a: The first integer for the operation
*@b: The second integer for the operation
*
*Return: The sum of both integers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - A Function that returns the subtraction value
*of two integers
*@a: The first integer
*@b: The second integer
*
*Return: The result of subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - Operation Multiply. A Function that multiplies two
*integers
*@a: The first operand
*@b: The second Operand
*Return: the result of the multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - Operation division. A function that divides two
*integers
*@a: the first integer
*@b: the second integer
*
*Return: The result of division
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - Operation Modulus. A function that returns the
*remainder after dividing two integers
*@a: The first operand
*@b: The second operand
*
*Return: The remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
