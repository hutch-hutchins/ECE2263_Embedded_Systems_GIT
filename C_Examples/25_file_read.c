#include <stdio.h>

int main() {
	char fileLine[20];

	FILE *filePointer = fopen("example.txt", "r");
	fgets(fileLine, 5, filePointer);
	

	printf("%s\n", fileLine);

	fgets(fileLine, 20, filePointer);
	

	printf("%s", fileLine);
    fclose(filePointer);
}