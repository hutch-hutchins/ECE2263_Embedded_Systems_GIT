#include <stdio.h>

int main() {
	char yourName[20];

	printf("Please input your name\n");
	fgets(yourName, 20, stdin);
	printf("Your name is %s\n", yourName);
}