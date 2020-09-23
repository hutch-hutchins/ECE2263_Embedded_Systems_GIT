#include <stdio.h>

int main() {

	for(double i=0; i<=100.0; i = i + 1.0){
		printf("i is %f\n", i);
		i++;
	}
	//printf("i is now %d, outside the loop\n", i);
}