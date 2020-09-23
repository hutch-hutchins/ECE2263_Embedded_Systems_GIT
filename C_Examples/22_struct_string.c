#include <stdio.h>
#include <string.h>

int main() {

	struct student {
		char studentName[20];
		char studentDegree[20];
		int studentAge;
		float studentGpa;
	};

	struct student studentOne;
	struct student studentTwo;

	char nathan[] = "Nathan";

	strcpy(studentOne.studentName, nathan);
	strcpy(studentOne.studentDegree, "Computer Engineering");
	studentOne.studentAge =30;
	studentOne.studentGpa = 3.85;

	strcpy(studentTwo.studentName, "Shannon");
	strcpy(studentTwo.studentDegree, "Electrical Engineering");
	studentTwo.studentAge = 25;
	studentTwo.studentGpa = 4.0;

	printf("%p is %p\n", &studentOne.studentName, &studentOne.studentAge);
}