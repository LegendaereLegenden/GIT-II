/*
 * task_1_3.c
 *
 *  Created on: 30.10.2020
 *      Author: lars
 */


#include <stdio.h>
#include <stdlib.h>

#define LOWER  0
#define UPPER  300
#define STEP  20

void for_loop(int fahr){
	printf("for_loop :\n");
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
		printf("%d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
	}
}

void while_loop(int fahr){
	printf("\nwhile_loop :\n");
	while (fahr <= UPPER){
		printf("%d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
		fahr = fahr + STEP;
	}
}
int main(){

	int fahr;

	for_loop(fahr);

	while_loop(fahr);

	return 0;
}
