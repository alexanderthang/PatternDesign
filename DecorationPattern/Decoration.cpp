#include <iostream>
#include <string>
#include <string.h>
using namespace std;


class Beverage{
protected:
	string description;

public:
	string getDescription(){
		return description;
	}
	virtual float cost() = 0;
};

class CondimentDecorator : public Beverage{
public:
	string getDescription();
};

class Espresso : public Beverage{
public:
	Espresso(){
		description = "Espresso";
	}
	float cost(){
		return 1.99;
	}
};

class HouseBlend : public Beverage{
public:
	HouseBlend(){
		description = "HouseBlend";
	}
	float cost(){
		return 0.89;
	}
};


class DarkRoast : public Beverage{
public:
	DarkRoast(){
		description = "DarkRoast";
	}
	float cost(){
		return 0.99;
	}
};


class Decaf : public Beverage{
public:
	Decaf(){
		description = "Decaf";
	}
	float cost(){
		return 1.05;
	}
};

class Mocha : public CondimentDecorator{
	Beverage *beverage;
public:
	Mocha(Beverage *beverage){
		this -> beverage = beverage;
	}
	string getDescription(){
		return strcat(beverage->getDescription(), ", Mocha");
	}

	float cost(){
		return .20 + beverage->cost();
	}
};

int main(){
	Beverage *beverage = new Espresso;
	cout << beverage->getDescription() << " $" << beverage->cost();
	return 0;
}


