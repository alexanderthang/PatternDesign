#ifndef CHICKENBURGER_H
#define CHICKENBURGER_H
#include <string>
#include "Burger.h"
class ChickenBurger : public Burger{
public:
	std::string name();
	int price();
};
#endif