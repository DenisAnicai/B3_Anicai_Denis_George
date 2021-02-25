#define _CRT_SECURE_NO_WARNINGS
#include "StudentClass.h"
#include "GlobalFunctions.h"

int CompareName(Student s1, Student s2)
{
	char name_student1[256], name_student2[256];
	strcpy(name_student1, s1.GetName());
	strcpy(name_student2, s2.GetName());

	if (strcmp(name_student1, name_student2) == 0)
		return 0;
	else if (strcmp(name_student1, name_student2) > 0)
		return 1;
	else
		return -1;

		
}

int CompareGradeEng(Student s1, Student s2)
{
	float grade_student1, grade_student2;
	grade_student1 = s1.GetGradeEng();
	grade_student2 = s2.GetGradeEng();


	if (grade_student1 == grade_student2)
		return 0;
	else
		if (grade_student1 > grade_student2)
			return 1;
		else
			return -1;
}

int CompareGradeMat(Student s1, Student s2)
{
	float grade_student1, grade_student2;
	grade_student1 = s1.GetGradeMat();
	grade_student2 = s2.GetGradeMat();

	if (grade_student1 == grade_student2)
		return 0;
	else
		if (grade_student1 > grade_student2)
			return 1;
		else
			return -1;
}

int CompareGradeHst(Student s1, Student s2)
{
	float grade_student1, grade_student2;
	grade_student1 = s1.GetGradeHst();
	grade_student2 = s2.GetGradeHst();

	if (grade_student1 == grade_student2)
		return 0;
	else
		if (grade_student1 > grade_student2)
			return 1;
		else
			return -1;
}

int CompareAverageGrade(Student s1, Student s2)
{
	float av_grade_student1, av_grade_student2;
	av_grade_student1 = s1.AverageGrade();
	av_grade_student2 = s2.AverageGrade();

	if (av_grade_student1 == av_grade_student2)
		return 0;
	else
		if (av_grade_student1 > av_grade_student2)
			return 1;
		else
			return -1;
}