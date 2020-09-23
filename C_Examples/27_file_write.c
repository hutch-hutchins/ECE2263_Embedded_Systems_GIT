#include <stdio.h>

int main() {
	FILE *filePointer = fopen("example.pdf", "w+");

	fprintf(filePointer, "writing to file\n");
	fprintf(filePointer, "writing again\n");
	fprintf(filePointer, "writing again again\n");

	fclose(filePointer);
}