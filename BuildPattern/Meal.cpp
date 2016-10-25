#include "Meal.h"
#include <iostream>
#include "Item.h"
void Meal::addItem(Item *item){
	items.push_back(item);
}
int Meal::getCost(){
	int cost = 0;
	std::vector<Item*>::iterator iter;
	for(iter = items.begin(); iter != items.end(); iter++){
		cost += (*iter)->price();
	}
	return cost;
}
void Meal::showItems(){
	std::vector<Item*>::iterator iter;
	for(iter = items.begin(); iter != items.end(); iter++){
		std::cout<<"Item: "<<(*iter)->name()<<", ";
		std::cout<<"Packing: "<<(*iter)->packing()->pack()<<", ";
		std::cout<<"Price: "<<(*iter)->price()<<std::endl;
	}
}