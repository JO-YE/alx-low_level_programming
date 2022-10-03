#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra *.c
ar -rc liball.a *.o
ranlib liball.a
