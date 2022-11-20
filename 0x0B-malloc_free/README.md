Learning Objectives

General



What is the difference between automatic and dynamic allocation

What is malloc and free and how to use them

Why and when use malloc

How to use valgrind to check for memory leak

Requirements

All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic

All files are linted for syntax and style with Betty

Tasks

0. Float like a butterfly, sting like a bee

Write a function that creates an array of chars, and initializes it with a specific char.

Prototype: char *create_array(unsigned int size, char c);

Returns NULL if size = 0

Returns a pointer to the array, or NULL if it fails
