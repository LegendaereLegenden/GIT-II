/*
 * task_1_5.c
 *
 *  Created on: 30.10.2020
 *      Author: lars
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	char c;

	while((c = getchar()) != EOF){
		if (c == ' '){
			c = '\n';
		}
		putchar(c);
	}

	return 0;
}
