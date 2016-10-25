#include "Burger.h"
#include "Packing.h"
#include "Wrapper.h"
Packing* Burger::packing(){
	return new Wrapper;
}