#!/bin/bash

# Check if the filename argument is provided
if [ $# -ne 1 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

# Extract filename without extension
filename=$(basename -- "$1")
filename_no_ext="${filename%.*}"

# Create the bin directory if it doesn't exist
mkdir -p ./bin

# Compile the source file and save the output in the bin directory
echo "Compiling $1..."
gcc "$1" -o "./bin/$filename_no_ext"

# Check if compilation was successful
if [ $? -eq 0 ]; then
    # Run the executable
    echo "Running $filename_no_ext..."
    "./bin/$filename_no_ext"
else
    echo "Compilation failed."
fi
