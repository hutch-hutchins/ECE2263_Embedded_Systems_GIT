#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	int numberOne = 21;
	int numberTwo = 10;
	int numberThree = 2;

	char buffer[30];

	printf("numberOne in Hex: %x \n", numberOne);
	printf("numberTwo in Hex: %x \n", numberTwo);
	printf("numberThree in Hex: %x \n", numberThree);

	printf("\n\n");

	printf("numberOne in Octal: %o \n", numberOne);
	printf("numberTwo in Octal: %o \n", numberTwo);
	printf("numberThree in Octal: %o \n", numberThree);

	printf("\n\n");

	itoa(numberOne, buffer, 2);

	printf("numberOne in Bin:\t%6s \n", buffer);
	printf("numberTwo in Bin:\t%6s \n", itoa(numberTwo, buffer, 2));
	printf("numberThree in Bin:\t%6s \n", itoa(numberThree, buffer, 2));

	printf("\n\n");

	numberThree = numberOne & numberTwo;
	printf("NumberOne AND numberTwo:\t%6s \n", itoa(numberThree, buffer, 2));

	printf("\n\n");

	numberThree = numberOne | numberTwo;
	printf("NumberOne OR numberTwo:\t%6s \n", itoa(numberThree, buffer, 2));

	printf("\n\n");

	numberThree = numberOne & ~numberTwo;

	printf("Trouble: %x\n", ~numberTwo);

	printf("NumberOne AND ~numberTwo:\t%6s \n", itoa(numberThree, buffer, 2));

	printf("\n\n");


}