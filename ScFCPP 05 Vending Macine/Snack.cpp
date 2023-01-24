#include "Snack.h"

Snack::Snack(const std::string name){
	this->name = name;
}

Snack::Snack(const std::string name, double price){
	this->name = name;
	this->price = price;
}

Snack::Snack(const std::string name, double price, int nutritionalValue){
	this->name = name;
	this->price = price;
	this->nutritionalValue = nutritionalValue;
}
