#!/bin/bash
# Create liball.so from all .c files in current directory

# Check for .c files in directory
if [ -z $(ls *.c) ]; then
    echo "No .c files found in directory."
    exit
fi

# Create .o files from .c files
for cfile in *.c; do
    gcc -c -Wall -Werror -fpic $cfile
done

# Create liball.so from .o files
gcc -shared -o liball.so *.o

# Cleanup .o files
rm *.o

echo "liball.so created successfully!"
