#ifndef ITEM_H
#define ITEM_H
#include "Packing.h"
#include <string>
class Item{
public:
	virtual std::string name() = 0;
	virtual Packing* packing() = 0;
	virtual int price() = 0;
};
#endif
