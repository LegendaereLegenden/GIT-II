/*
 * task_1_2.c
 *
 *  Created on: 29.10.2020
 *      Author: lars
 */


#include <stdio.h>
#include <stdlib.h>

void output_1 (int f, int c) {
	printf("%5d %20dnn\n", f, c);	// '%5d' specifies the minimum width or space that the output should have
					// the amount can be any number
					// is the specified width less than the number needs, the number will still be printed
}

void output_2 (int f, int c) {
	printf("%-5d %-5dnn", f, c);	// negative numbers reserve place on the back of the number
					// positive numbers reserve space on the front of the number
}

void output_3 (int f, int c) {
	printf("%3d %6dn n", f, c);	// printing '%dn n' does not interrupt the '%d' command
					// it will still print the variable plus without a break 'n n'
}

void main(){
	int fahr, celsius;
	int lower, upper, step, example;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	example = 2;

	while ( fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		switch( example ){

		case 1	:	output_1(fahr, celsius);
					break;
		case 2	:	output_2(fahr, celsius);
					break;
		case 3	:	output_3(fahr, celsius);
					break;
		};

		fahr = fahr + step;
	}
}

