#include <stdio.h>

int main() {

	int i = 0;

	while (i < 3) {
		printf("i is %d\n", i);
		i++;
	}
	printf("i is now %d, outside the loop\n", i);
}