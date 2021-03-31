#include "Car.h";
#include "Toyota.h";
#include "Weather.h";
#include <string>

using namespace std;

Toyota::Toyota()
{
	brand = (char*)"Toyota";
	fuelCapacity = 86;
	fuelConsumption = 28;
	averageSpeed[Rain] = 35;
	averageSpeed[Sunny] = 60;
	averageSpeed[Snow] = 31;
}

char* Toyota::getBrand()
{
	return brand;
}

float Toyota::statistics(int condition, int surface, bool& ranked)
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