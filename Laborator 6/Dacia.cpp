#include "Car.h";
#include "Dacia.h";
#include "Weather.h";
#include <string>

using namespace std;

Dacia::Dacia()
{
	brand = (char*)"Dacia";
	fuelCapacity = 60;
	fuelConsumption = 23;
	averageSpeed[Rain] = 25;
	averageSpeed[Sunny] = 45;
	averageSpeed[Snow] = 20;
}

char* Dacia::getBrand()
{
	return brand;
}

float Dacia::statistics(int condition, int surface, bool& ranked)
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