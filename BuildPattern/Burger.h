#ifndef BURGER_H
#define BURGER_H
#include "Packing.h"
#include "Item.h"
#include <string>
class Burger: public Item{
public:
	Packing* packing();
	virtual int price() = 0;
};
#endif