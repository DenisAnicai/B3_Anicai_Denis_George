#include "Sort.h";

int main()
{
	bool d = true;
	Sort a(5, 2, 30); //Random values between 2 and 30

	a.InsertSort(d);
	a.Print();
	printf("\n");

	d = false;
	Sort b({ 2, 1, 90, 36, 150, 32 });
	b.QuickSort(d);
	b.Print();
	printf("\n");

	d = true;
	int v[] = { 5, 2, 8, 15, 13, 35 };
	Sort c(v, 6);
	c.BubbleSort(d);
	c.Print();
	printf("\n");

	d = false;
	Sort e(7, 7, 2, 4, 10, 16, 8, 90);
	e.BubbleSort(d);
	e.Print();
	printf("\n");

	d = true;
	char s[] = "10,40,100,5,70";
	Sort f(s);
	f.QuickSort(d);
	f.Print();
	printf("\n");


}