#include <stdio.h>

int main(){
	int robotLocation[][2] = { {0,0},{1,1},{1,2} };

	printf("The robot is at x = %d, y = %d\n", robotLocation[1][0], robotLocation[1][1]);
}