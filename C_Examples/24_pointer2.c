#include <stdio.h>

int main() {
	int myArray[3] = { 41, 52, 783 };

	int *p;	
	p = myArray;

	printf("%p, %p, %p, %p\n", p, p++, p++, p++);
}