#pragma once

class Car
{
protected:
	char* brand;
	int fuelCapacity;
	int fuelConsumption;
	int averageSpeed[3];
public:
	virtual float statistics(int, int, bool& ranked) = 0;
	virtual char* getBrand() = 0;

	int getFuelCapacity() { return fuelCapacity; }
	int getFuelConsumption() { return fuelConsumption; }
};