#define _CRT_SECURE_NO_WARNINGS
#include "StudentClass.h"

void Student::SetName()
{
	char name_student[256];
	cin.getline(name_student, 255);
	strcpy(name, name_student);
}

char* Student::GetName()
{
	return name;
}

void Student::SetGradeEng(float x) 
{
	english = x;
}

void Student::SetGradeHst(float x)
{
	history = x;
}

void Student::SetGradeMat(float x)
{
	mathematics = x;
}

float Student::GetGradeEng()
{
	return english;
}

float Student::GetGradeHst()
{
	return history;
}

float Student::GetGradeMat()
{
	return mathematics;
}

float Student::AverageGrade()
{
	 return (english + history + mathematics) / 3.0;
}