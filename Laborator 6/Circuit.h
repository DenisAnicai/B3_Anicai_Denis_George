#pragma once

#include "Car.h";
#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Ford.h"
#include "Mazda.h"
#include <string>
using namespace std;

class Circuit 
{
private:
	Car* car[15];
	float finishTime[15];
	bool raceCompleted[15];
	int numberOfCars;
	int weather;
	int surface;
public:
	Circuit();

	void AddCar(Car* c);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();
	void PrintAllInstances();

	void SetLength(int);
	void SetWeather(int);
};