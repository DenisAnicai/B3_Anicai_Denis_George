#pragma once

class Mercedes : public Car
{
public:
	Mercedes();
	float statistics(int, int, bool& ranked) override;
	char* getBrand() override;
};