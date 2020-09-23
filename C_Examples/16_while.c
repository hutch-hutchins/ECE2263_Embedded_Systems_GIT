#include <stdio.h>

int main() {

	int thingIsOn =  0;
	int i = 0;

	while (thingIsOn) {
		printf("i is %d\n", i);
		i++;

		if(i > 100){
			thingIsOn = 0;
		}

	}
	printf("i is now %d, outside the loop\n", i);
}