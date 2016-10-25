#include "ColdDrink.h"
#include "Bottle.h"
Packing *ColdDrink::packing(){
	return new Bottle();
}