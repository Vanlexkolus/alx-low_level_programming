#!/bin/bash
#Create a script called create_static_lib.sh that creates a static library called
#liball.a from all the .c files that are in the current directory.
gcc -c *.o
ar rc liball.a *.o
ranlib liball.a
