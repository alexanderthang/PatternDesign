#ifndef COLDDRINK_H
#define COLDDRINK_H 
#include "Item.h"
#include "Packing.h"
class ColdDrink: public Item{
public:
	Packing *packing();
	virtual int price() = 0;
};
#endif