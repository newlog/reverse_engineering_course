// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int func(void) {
	printf("marker!");
	int a = 2;
	return a;
}

int main(int argc, char **argv) {
	int a = func();
	return a;
}