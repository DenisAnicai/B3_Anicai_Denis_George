#pragma once

class Dacia : public Car
{
public:
	Dacia();
	float statistics(int, int, bool& ranked) override;
	char* getBrand() override;
};