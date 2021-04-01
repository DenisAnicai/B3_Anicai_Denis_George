#include "Circuit.h";
#include "Car.h";
#include "Weather.h";
#include <string>;
#include <iostream>;

using namespace std;

Circuit::Circuit()
{
	numberOfCars = 0;
}

void Circuit::SetWeather(int condition)
{
	weather = condition;
}

void Circuit::SetLength(int length)
{
	surface = length;
}

void Circuit::AddCar(Car* c)
{
	car[numberOfCars++] = c;
}

void Circuit::Race()
{
	for (int i = 0; i < numberOfCars; i++)
	{
		finishTime[i] = car[i]->statistics(weather, surface, raceCompleted[i]);

	}
}

void Circuit::ShowFinalRanks()
{
	cout << "Timpul scos de fiecare masinia care a terminat cursa:\n\n";
	for (int i = 0; i < numberOfCars - 1; i++)
	{
		if (raceCompleted[i])
		{
			for(int j = i + 1; j < numberOfCars; j++)
				if (raceCompleted[j])
				{
					if (finishTime[i] > finishTime[j])
						swap(car[i], car[j]);
				}
		}
	}
	
	for (int i = 0; i < numberOfCars; i++)
	{
		if (raceCompleted[i])
		{
			cout << car[i]->getBrand() << ": " << finishTime[i] << endl;
		}
	}

	cout << endl;
}

void Circuit::ShowWhoDidNotFinish()
{
	cout << "Masinile care nu au terminat cursa si timpii scosi pana la acel moment:\n\n";
	
	for (int i = 0; i < numberOfCars; i++)
	{
		if (!raceCompleted[i])
		{
			cout << car[i]->getBrand() << ": " << finishTime[i] << endl;
		}
	}
	
	cout << endl;
}

void Circuit::PrintAllInstances()
{
	cout << "Instante folosite pentru Brand, Fuel capacity si Fuel Consumption: \n\n";
	for (int i = 0; i < numberOfCars; i++)
	{
		
		cout << car[i]->getBrand() << " " <<  car[i]->getFuelCapacity() << " " << car[i]->getFuelConsumption() << endl;
	}

}