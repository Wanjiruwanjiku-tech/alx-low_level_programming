#include<stdlib.h> 
#include<time.h> 
#include<stdlib.h>

/**
 * main - Entry point
 * Decription: print statements followed by a newline
 * Return: 0 (success)
 */
int main(void) 
{ 
	int n;
	int s;
      
	 srand(time(0)); 
	n = rand() - RAND_MAX / 2;
	s = n = 10;

	if (s > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, s);
	else if (s == 0)
		printf("Last digit of %i is %i and is 0\n", n, s);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, s);
	
	return (0); 
}
