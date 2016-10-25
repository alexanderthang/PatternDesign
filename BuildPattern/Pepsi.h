#ifndef PEPSI_H
#define PEPSI_H
#include <string>
#include "ColdDrink.h"
class Pepsi: public ColdDrink{
public:
	std::string name();
	int price();
};
#endif