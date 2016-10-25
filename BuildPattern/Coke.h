#ifndef COKE_H
#define COKE_H
#include "ColdDrink.h"
#include <string>
class Coke: public ColdDrink{
public:
	std::string name();
	int price();
};
#endif