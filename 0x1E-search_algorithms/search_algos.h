#ifndef SEARCH_ALOGS_H
#define SEARCH_ALOGS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

/* My Project Prototypes */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int linear_search_block(int *array, int start, int end, int value);


#endif /* SEARCH_ALOGS_H */
