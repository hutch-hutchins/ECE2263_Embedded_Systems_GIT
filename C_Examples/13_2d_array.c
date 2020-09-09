#include <stdio.h>

int main(){
	int robotLocation[][3] = { {34, 54,0},{75, 9,0},{1,2,0} };

	printf("The robot is at x = %d, y = %d, z = %d\n", robotLocation[1][0], robotLocation[1][1], robotLocation[1][2]);
}