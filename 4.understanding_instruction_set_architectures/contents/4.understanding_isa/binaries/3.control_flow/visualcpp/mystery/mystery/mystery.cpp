// mystery.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int func(int nparams) {
	int a = nparams;
	switch (a) {
	case 1:
		printf("a is one");
	case 2:
		printf("a is two");
	case 3:
		printf("a is three");
	default:
		printf("who knows what a is!");
		break;
	}
	return a;
}
int main(int argc, char **argv) {
	int a = func(argc);
	return a;
}
