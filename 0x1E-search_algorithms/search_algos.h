#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void prt_array(int *array, size_t low, size_t high);
int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
