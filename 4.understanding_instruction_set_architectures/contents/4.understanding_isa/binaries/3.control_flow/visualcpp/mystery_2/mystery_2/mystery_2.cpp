// mystery_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int func2() {
	return rand();
}

int func1() {
	srand((unsigned int)time(NULL));
	int a = func2();
	switch (a) {
		case RAND_MAX:
			printf("Upper limit!");
		case 0:
			printf("Lower limit!");
		default:
			printf("In the middle...");
			break;
	}
	return a;
}
int main(int argc, char **argv) {
	int a = func1();
	return a;
}
