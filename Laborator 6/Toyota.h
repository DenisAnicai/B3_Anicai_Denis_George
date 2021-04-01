#pragma once

class Toyota : public Car
{
public:
	Toyota();
	float statistics(int, int, bool& ranked) override;
	char* getBrand() override;
};