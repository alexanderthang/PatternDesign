#ifndef MEALBUILDER_H
#define MEALBUILDER_H
#include "Meal.h"
class MealBuilder{
public:
	static Meal prepareVegMeal();
	static Meal prepareNonVegMeal();
};
#endif