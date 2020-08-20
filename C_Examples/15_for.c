#include <stdio.h>

int main() {

	int i = 0;

	for(i=0; i<3; i++){
		printf("i is %d\n", i);
	}
	printf("i is now %d, outside the loop\n", i);
}