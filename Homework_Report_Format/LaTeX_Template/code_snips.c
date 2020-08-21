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

	strcpy(studentOne.studentName, "Nathan");
	strcpy(studentOne.studentDegree, "Computer Engineering");
	studentOne.studentAge = 28;
	studentOne.studentGpa = 3.85;

	strcpy(studentTwo.studentName, "Shannon");
	strcpy(studentTwo.studentDegree, "Electrical Engineering");
	studentTwo.studentAge = 25;
	studentTwo.studentGpa = 4.0;

	printf("%s's GPA is %f\n", studentOne.studentName, studentOne.studentGpa);
}
