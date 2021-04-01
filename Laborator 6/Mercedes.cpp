#include "Car.h";
#include "Mercedes.h";
#include "Weather.h";
#include <string>

using namespace std;

Mercedes::Mercedes()
{
	brand = (char*)"Mercedes";
	fuelCapacity = 95;
	fuelConsumption = 36;
	averageSpeed[Rain] = 28;
	averageSpeed[Sunny] = 55;
	averageSpeed[Snow] = 43;
}

char* Mercedes::getBrand()
{
	return brand;
}

float Mercedes::statistics(int condition, int surface, bool& ranked)
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