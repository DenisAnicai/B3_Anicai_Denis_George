#include "Car.h";
#include "Ford.h";
#include "Weather.h";
#include <string>

using namespace std;

Ford::Ford()
{
	brand = (char*)"Ford";
	fuelCapacity = 65;
	fuelConsumption = 16;
	averageSpeed[Rain] = 32;
	averageSpeed[Sunny] = 50;
	averageSpeed[Snow] = 21;
}

char* Ford::getBrand()
{
	return brand;
}

float Ford::statistics(int condition, int surface, bool& ranked)
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