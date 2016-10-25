#ifndef MEAL_H
#define MEAL_H
#include "Item.h"
#include <vector>
class Meal{
private:
	std::vector<Item *> items;
public:
	void addItem(Item *item);
	int getCost();
	void showItems();
};
#endif