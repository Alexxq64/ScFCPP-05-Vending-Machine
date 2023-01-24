#pragma once
#include <string>

class Snack
{
	std::string name;
	double price;
	int nutritionalValue;

public:
	Snack() = default;
	Snack(const std::string name);
	Snack(const std::string name, double price);
	Snack(const std::string name, double price, int nutritionalValue);
	~Snack() = default;

	std::string getName() {
		return name;
	}

};
