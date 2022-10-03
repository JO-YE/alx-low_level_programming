#!/bin/bash
gcc -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
ranlib liball.a
