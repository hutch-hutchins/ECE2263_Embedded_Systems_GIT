#include <stdio.h>

int main() {
	char fileLine[20];

	FILE *filePointer = fopen("example.txt", "r");
	fgets(fileLine, 20, filePointer);
	fclose(filePointer);

	printf("%s", fileLine);

}