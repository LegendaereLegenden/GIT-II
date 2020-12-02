/*
============================================================================
Name : PlainCHelloWorld.c
Author : J. Endler
Version :
Copyright : 
Description : Hello World in C, Ansi-style
============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

//version 1
int main(void) {
	puts("Hello\nWorld!");  // prints "Hello", then "World!" one line below
	return EXIT_SUCCESS;
}

//version 2
int vers2(void) {
	puts("Hello");  // prints "Hello", then "World!" one line below
	puts("World!");
	return EXIT_SUCCESS;
}

//version 3
int vers3(void) {
	printf("Hello");
	printf("\n");      // prints "Hello", then "World!" one line below
	printf("World!");
	return EXIT_SUCCESS;
}


