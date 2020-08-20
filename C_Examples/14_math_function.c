#include <stdio.h>

int add(int x, int y);

int main() {
	int firstNumber, secondNumber, finalNumber;
	printf("Please give me your first number\n");
	scanf("%d", &firstNumber);
	printf("Please give me your second number\n");
	scanf("%d", &secondNumber);

	finalNumber = add(firstNumber, secondNumber);

	printf("%d + %d = %d", firstNumber, secondNumber, finalNumber);
}

int add(int x, int y) {
	return x + y;
}