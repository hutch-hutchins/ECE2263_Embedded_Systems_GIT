#include <stdio.h>

void main() {
	int int1 = 23;
	double doub1 = 4.5;

	printf("interger 1: %d\n", int1);
	printf("double 1: %f\n", doub1);
	int1 = (int)doub1;
	printf("interger 2: %d\n", int1);
}