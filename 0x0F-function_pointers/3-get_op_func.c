#include "3-calc.h"

/**
*get_op_func - A Function pointer that point to
*functions that execute specific arithmetic operations
*
*@s: the operator passed as argument to the program
*Return:  a pointer to the function that corresponds to the operator given
*as a parameter. Example: get_op_func("+")
*should return a pointer to the function op_add
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	/**
	*Define an array of op_t structures,
	*each containing itd predefined operator and specific function
	*
	*the array is terminated with a NULL sentinel to
	*indicate that the end of array has been reached
	*/

	int i = 0; /*counter variable set to zero*/

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
