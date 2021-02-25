#pragma once

#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
	char name[256];
	float english;
	float mathematics;
	float history;

public:
	void SetName();
	char* GetName();
	void SetGradeEng(float x);
	void SetGradeMat(float x);
	void SetGradeHst(float x);
	float GetGradeEng();
	float GetGradeMat();
	float GetGradeHst();
	float AverageGrade();
};