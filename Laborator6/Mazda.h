#pragma once

class Mazda : public Car
{
public:
	Mazda();
	float statistics(int, int, bool& ranked) override;
	char* getBrand() override;
};