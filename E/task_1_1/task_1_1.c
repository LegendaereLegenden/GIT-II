/*
 * task_1_1.c
 *
 *  Created on: 29.10.2020
 *      Author: lars
 */

#include <stdio.h>
#include <stdlib.h>

void example_1(void){
	puts("Hello\nWorld!");
}

void example_2(void){
	puts("Hello");
	puts("World!");
}

void example_3(void){
	printf("Hello");
	printf("World!\n");	// '\n' only used for organization purposes
}

void example_4(void){
	printf("Hello\nWorld!");
}

int main(void){

	example_1();	// prints with '\n'
	example_2();	// prints with two puts_commands
	example_3();	// realizing using printf_command doesn't work with example_2
	example_4();	// printf_commands with '\n' still work

	return 0;
}
