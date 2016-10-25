#include <iostream>
#include "VegBurger.h"
#include "Item.h"
#include "Meal.h"
#include "MealBuilder.h"
int main(){
	Meal meal;	
	meal = MealBuilder::prepareVegMeal();
	std::cout<<"Veg Meal: "<<std::endl;
	meal.showItems();
	std::cout<<"Total cost:"<<meal.getCost()<<std::endl;
	meal = MealBuilder::prepareNonVegMeal();
	std::cout<<"Non Veg Meal: "<<std::endl;
	meal.showItems();
	std::cout<<"Total cost:"<<meal.getCost()<<std::endl;
	return 0;
}
