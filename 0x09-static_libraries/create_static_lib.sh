#!/bin/bash

for file_name in *.c; do
	# Removing the ".c" extension from the file name
	object_file="${file_name%.c}.o"

	# Compiling the C source file into an object file
	gcc -c "$file_name" -o "$object_file"

	# Adding the object file to the library
	ar rcs liball.a "$object_file"
done
