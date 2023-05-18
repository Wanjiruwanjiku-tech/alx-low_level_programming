#include <stdio.h>
#define MAXIMUM(a, b) ((a) > (b) ? (a) : (b))

/**
*The macro MAXIMUM is defined using the
*#define preprocessor directive. it takes 2
*arguements and finds the maximu number btwn the 2
*/
int main(void)
{
	int x;
	int y;

	x = 10;
	y = 20;

	printf("The Maximum Number of %d and %d is %d\n", x, y, MAXIMUM(x, y));

	return (0);
}
