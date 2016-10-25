#ifndef BOTTLE_H
#define BOTTLE_H
#include "Packing.h"
#include <string>
class Bottle: public Packing{
public:
	std::string pack();
};
#endif