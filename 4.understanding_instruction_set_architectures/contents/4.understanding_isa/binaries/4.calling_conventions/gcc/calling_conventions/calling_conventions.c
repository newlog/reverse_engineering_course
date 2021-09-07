#include <stdio.h>

int func4(int, int, int);
__attribute__((stdcall)) int func3(int, int, int);
__attribute__((fastcall)) int func2(int, int, int);
__attribute__((cdecl)) int func1(int, int, int);

int func4(int k, int l, int m) {
	printf("K = %d, L = %d, M = %d", k, l, m);
	return k;
}

__attribute__((stdcall)) int func3(int h, int i, int j) {
	printf("H = %d, I = %d, J = %d", h, i, j);
	return h;
}

__attribute__((fastcall)) int func2(int e, int f, int g) {
	printf("E = %d, F = %d, G = %d", e, f, g);
	return e;
}

__attribute__((cdecl)) int func1(int a, int b, int c) {
	printf("A = %d, B = %d, C = %d", a, b, c);
	return a;
}

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	a = func1(1, 2, 3);
	b = func2(4, 5, 6);
	c = func3(7, 8, 9);
	d = func4(10, 11, 12);
	printf("Result: %d", a + b + c + d);
    	return 0;
}

