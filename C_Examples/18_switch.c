#include <stdio.h>

int main() {
	char input = '1';
	switch (input)
	{
	case 1:
		printf("Case 1\n");
		break;
	case '2':
		printf("Case 2\n");
	case 3:
		printf("Case 3\n");
		break;
	default:
		break;
	}
}