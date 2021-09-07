#include <stdio.h>

int func(void) {
	printf("marker!");
        int a = 2;
	int b = 4;
	int c = 0;
	a = a + 2;
	a = a - 2;
	a = a * b;
	c = a / b;
        return a;
}

int main(int argc, char **argv) {
        int a = func();
        return a;
}
