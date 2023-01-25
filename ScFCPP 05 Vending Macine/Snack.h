#pragma once
#include <string>

class Snack
{
	std::string _name;
	double _price;
	int _nutritionalValue;

public:
	Snack() = default;
	Snack(const std::string name);
	Snack(const std::string name, double price);
	Snack(const std::string name, double price, int nutritionalValue);
	~Snack() = default;

	void setName(const std::string name);
	std::string getName() const;
	void setPrice(double price);
	double getPrice() const;
	void setEnergy(int nutritionalValue);
	int getNutritionalValue() const;
};
