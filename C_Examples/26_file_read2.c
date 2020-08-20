#include <stdio.h>

int main() {
	char fileLine[100];

	FILE *filePointer = fopen("example.txt", "r");
	
	fgets(fileLine, 100, filePointer);
	printf("%s", fileLine);
	
	fgets(fileLine, 100, filePointer);
	printf("%s", fileLine);
	
	fgets(fileLine, 100, filePointer);
	printf("%s", fileLine);
	
	fclose(filePointer);
}