#include <stdio.h>

void main() {
	int int1 = 4;
	double doub1 = 24.52312;
	float float1 = 24.52312;
	char char1 = 'a';

	char1 = char1 - 0x20;

	printf("integer: %d\n", int1);
	printf("double: %2.4f\n", doub1);
	printf("float: %4.2f\n", float1);
	printf("char: %c\n", char1);

}