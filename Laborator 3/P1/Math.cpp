#define _CRT_SECURE_NO_WARNINGS
#include "Math.h"
#include <stdarg.h>
#include <cstring>
#include <stdlib.h>
int Math::Add(int x, int y) {
	return x + y;
}
int Math::Add(int x, int y, int z) {
	return x + y + z;
}
int Math::Add(double x, double y) {
	return x + y;
}
int Math::Add(double x, double y, double z) {

	return x + y + z;
}
int Math::Mul(int x, int y) {
	return x * y;

}
int Math::Mul(int x, int y, int z) {
	return x * y * z;

}

int Math::Mul(double x, double y) {
	return x * y;

}
int Math::Mul(double x, double y, double z) {
	return x * y * z;
}
int Math::Add(int count, ...) {
	va_list list;
	va_start(list, count);
	int sum = 0;
	for (int arg = 0; arg < count; arg++) {
		sum += va_arg(list, int);

	}
	va_end(list);

	return sum;
}
char* Math::Add(const char* s1, const char* s2) {
	if (s1 == nullptr || s2 == nullptr)
		return nullptr;
	
	char* c = new char[strlen(s1) + strlen(s2) + 1];
	c[0] = 0;
	strcpy(c, s1);
	strcat(c, s2);
	
	return c;
}