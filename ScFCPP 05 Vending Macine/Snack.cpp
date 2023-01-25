#include "Snack.h"

Snack::Snack(const std::string name){
	_name = name;
}

Snack::Snack(const std::string name, double price){
	_name = name;
	_price = price;
}

Snack::Snack(const std::string name, double price, int nutritionalValue){
	_name = name;
	_price = price;
	_nutritionalValue = nutritionalValue;
}

void Snack::setName(const std::string name){
	_name = name;
}

std::string Snack::getName() const {
	return _name;
}

void Snack::setPrice(double price){
	_price = price;
}

double Snack::getPrice() const{
	return _price;
}

void Snack::setEnergy(int nutritionalValue){
	_nutritionalValue = nutritionalValue;
}

int Snack::getNutritionalValue() const{
	return _nutritionalValue;
}