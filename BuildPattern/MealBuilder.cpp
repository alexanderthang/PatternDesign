#include "MealBuilder.h"
#include "VegBurger.h"
#include "Pepsi.h"
#include "ChickenBurger.h"
#include "Coke.h"
Meal MealBuilder::prepareVegMeal(){
	Meal meal;
	meal.addItem(new VegBurger);
	meal.addItem(new Pepsi);
	return meal;
}

Meal MealBuilder::prepareNonVegMeal(){
	Meal meal;
	meal.addItem(new ChickenBurger);
	meal.addItem(new Coke);
	return meal;
}

