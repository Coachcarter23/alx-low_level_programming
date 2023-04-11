#!/bin/bash
gcc -Wall -pedantic -Werror -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
