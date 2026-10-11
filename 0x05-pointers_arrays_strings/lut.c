#include <stdio.h>
#include <stdlib.h>

int main() {
	// Create LUT: k -> value
	// k: 0->255 %c
	// v: rand()

	for (int i = 0; i < 256; i++) {
		srand(i);
		printf("%d:%08x\n", i, rand());
	}
}
