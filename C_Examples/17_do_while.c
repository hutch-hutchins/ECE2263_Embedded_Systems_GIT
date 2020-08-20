#include <stdio.h>

int main() {

	int i = 0;

	do{
		printf("i is %d\n", i);
		i++;
	} while (i<3);
	printf("i is now %d, outside the loop\n", i);
}