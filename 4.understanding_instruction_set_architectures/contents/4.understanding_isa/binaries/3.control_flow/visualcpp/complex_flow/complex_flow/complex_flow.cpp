// complex_flow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int func(void) {
	int a = 2;
	if (a > 2) {
		printf("a is greater than 2\n");
		unsigned int b = a + 1;
		if (b > 2)
			printf("Unsigned b is greater than 2");
		else
			printf("Unsigned b is less or equal to 2");

	}
	else {
		printf("a is less or equal to 2\n");
	}
	return a;
}

int main(int argc, char **argv) {
	int a = func();
	return a;
}

