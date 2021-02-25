#define _CRT_SECURE_NO_WARNINGS
#include "StudentClass.h"
#include "GlobalFunctions.h"

int main()
{
	Student s1, s2;
	float x;

	cout << "Citim numele studentilor\n";
	cout << "Student 1: ";
	s1.SetName();
	cout << "Student 2: ";
	s2.SetName();
	cout << "\n\n\n";
	

	s1.SetGradeMat(2.8);
	s1.SetGradeEng(8.3);
	s1.SetGradeHst(5.7);
	cout << "Note student 1:\n";
	cout << "matematica: "<< s1.GetGradeMat();
	cout << '\n';
	cout << "istorie: " << s1.GetGradeHst();
	cout << '\n';
	
	cout << "engleza: " << s1.GetGradeEng();
	cout << "\n\n";
	

	s2.SetGradeMat(3.2);
	s2.SetGradeEng(6.8);
	s2.SetGradeHst(4.9);
	cout << "Note student 2:\n";
	cout << "matematica: " << s2.GetGradeMat();
	cout << '\n';
	cout << "istorie: " << s2.GetGradeHst();
	cout << '\n';
	cout << "engleza: " << s2.GetGradeEng();
	cout << "\n\n";
	


	float medie1, medie2;
	char nume_student1[256], nume_student2[256];
	strcpy(nume_student1, s1.GetName());
	strcpy(nume_student2, s2.GetName());
	cout << "Mediile celor doi:\n";
	cout << "medie " << nume_student1 << ": " << s1.AverageGrade() << "\n";
	cout << "medie " << nume_student2 << ": " << s2.AverageGrade() << "\n";

	
	if (CompareAverageGrade(s1, s2) == 1)
		cout << nume_student1 << " are media mai mare;\n";
	else if (CompareAverageGrade(s1, s2) == -1)
		cout << nume_student2 << " are media mai mare;\n";
	else
		cout << "Studentii au aceeasi medie\n";
	
	
	if (CompareGradeEng(s1, s2) == 1)
		cout << nume_student1 << " are nota mai mare la engleza\n";
	else if (CompareGradeEng(s1, s2) == -1)
		cout << nume_student2 << " are nota mai mare la engleza\n";
	else
		cout << "Au aceeasi medie la engleza\n";
	
	
	if (CompareGradeMat(s1, s2) == 1)
		cout << nume_student1 << " are nota mai mare la matematica\n";
	else if (CompareGradeMat(s1, s2) == -1)
		cout << nume_student2 << " are nota mai mare la matematica\n";
	else
		cout << "Au aceeasi medie la matematica\n";

	
	if (CompareGradeHst(s1, s2) == 1)
		cout << nume_student1 << " are nota mai mare la istorie\n";
	else if (CompareGradeHst(s1, s2) == -1)
		cout << nume_student2 << " are nota mai mare la istorie\n";
	else
		cout << "Au aceeasi medie la istorie\n";

	
	cout << "Ordinea alfabetica a numelor studentilor: ";
	if (CompareName(s1, s2) == -1)
		cout << nume_student1 << ", " << nume_student2;
	else if (CompareName(s1, s2) == 1)
		cout << nume_student2 << ", " << nume_student1;
	else
		cout << nume_student1 << ", " << nume_student2;

	return 0;
}