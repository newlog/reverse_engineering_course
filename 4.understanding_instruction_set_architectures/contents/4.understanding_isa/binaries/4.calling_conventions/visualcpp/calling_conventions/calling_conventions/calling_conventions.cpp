// calling_conventions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int func4(int k, int l, int m) {
	printf("K = %d, L = %d, M = %d", k, l, m);
	return k;
}

int __stdcall func3(int h, int i, int j) {
	printf("H = %d, I = %d, J = %d", h, i, j);
	return h;
}

int __fastcall func2(int e, int f, int g) {
	printf("E = %d, F = %d, G = %d", e, f, g);
	return e;
}

int __cdecl func1(int a, int b, int c) {
	printf("A = %d, B = %d, C = %d", a, b, c);
	return a;
}

int main()
{
	int a = func1(1, 2, 3);
	int b = func2(4, 5, 6);
	int c = func3(7, 8, 9);
	int d = func4(10, 11, 12);
	printf("Result: %d", a + b + c + d);
    return 0;
}

