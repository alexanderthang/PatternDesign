#ifndef VEGBURGER_H
#define VEGBURGER_H
#include "Burger.h"
#include <string>
class VegBurger: public Burger{
public:
	std::string name();
	int price();
};
#endif