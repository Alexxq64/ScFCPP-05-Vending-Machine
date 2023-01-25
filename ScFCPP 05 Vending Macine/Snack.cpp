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
