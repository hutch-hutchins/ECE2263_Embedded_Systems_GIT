#include <stdio.h>

int add(int x, int y);

int main() {
	int firstNumber, secondNumber, finalNumber;
	printf("Please give me your first number\n");
	scanf("%X", &firstNumber);
	printf("Please give me your second number\n");
	scanf("%X", &secondNumber);

	finalNumber = add(firstNumber, secondNumber);

	printf("%d + %d = %d", firstNumber, secondNumber, finalNumber);
}

int add(int x, int y) {
	return x + y;
}