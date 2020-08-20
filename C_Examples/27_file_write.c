#include <stdio.h>

int main() {
	FILE *filePointer = fopen("example.txt", "w+");

	fprintf(filePointer, "writing to file\n");

	fclose(filePointer);
}