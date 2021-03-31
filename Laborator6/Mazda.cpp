#include "Car.h";
#include "Mazda.h";
#include "Weather.h";
#include <string>

using namespace std;

Mazda::Mazda()
{
	brand = (char*)"Mazda";
	fuelCapacity = 75;
	fuelConsumption = 18;
	averageSpeed[Rain] = 29;
	averageSpeed[Sunny] = 47;
	averageSpeed[Snow] = 25;
}

char* Mazda::getBrand()
{
	return brand;
}

float Mazda::statistics(int condition, int surface, bool& ranked)
{
	int speed = averageSpeed[condition];
	float time = fuelCapacity / fuelConsumption;
	float distance = time * speed;
	if (distance >= surface)
		ranked = true;
	else ranked = false;

	float parcurs = (surface * time) / distance;

	return parcurs;
}