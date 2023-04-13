# 0x1E. C - Search Algorithms

## links
- [search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [space complexity](https://www.geeksforgeeks.org/g-fact-86/)

## General
> What is a search algorithm
>
> What is a linear search
>
> What is a binary search
>
> What is the best search algorithm to use depending on your needs 

## Tasks
0.[Linear search](./0-linear.c)
> Write a function that searches for a value in an array of integers using the Linear search algorithm
```
wilfried@0x1E-search_algorithms$ cat 0-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
wilfried@0x1E-search_algorithms$ ./0-linear 
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```

1. [Binary search](./1-binary.c)
> Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

```
wilfried@0x1E-search_algorithms$ cat 1-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

2. [2-O](./2-O)
> What is the time complexity (worst case) of a linear search in an array of size n?

3. [3-O](./3-O)
> What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

4. [4-O](./4-O)
> What is the time complexity (worst case) of a binary search in an array of size n?

5. [5-O](./5-O)
> What is the space complexity (worst case) of a binary search in an array of size n?

6. [6-O](./6-O)
> What is the space complexity of this function / algorithm?
```int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

8. [101-O](./101-O)
> What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?

