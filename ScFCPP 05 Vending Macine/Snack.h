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
	//Snack(const std::string name, double price);
	//Snack(const std::string name, double price, int nutritionalValue);
	~Snack() = default;

	std::string getName() const;

	//Not used. I do not know if I must write these methods
	// 
	//void setName(const std::string name);
	//void setPrice(double price);
	//double getPrice() const;
	//void setEnergy(int nutritionalValue);
	//int getNutritionalValue() const;
};
