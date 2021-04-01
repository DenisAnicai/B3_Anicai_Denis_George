#pragma once

class Ford : public Car
{
public:
	Ford();
	float statistics(int, int, bool& ranked) override;
	char* getBrand() override;
};