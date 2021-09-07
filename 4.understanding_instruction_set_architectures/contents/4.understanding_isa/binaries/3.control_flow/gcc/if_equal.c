#include <stdio.h>

int func(void) {
        int a = 2;
	if (a == 2) {
		printf("a is equal to 2\n");
	} else {
		printf("a is different to 2\n");
	}
        return a;
}

int main(int argc, char **argv) {
        int a = func();
        return a;
}

