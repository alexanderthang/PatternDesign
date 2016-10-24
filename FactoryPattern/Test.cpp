#include "Rectangle.h"
#include "ShapeFactory.h"
#include <iostream>

int main(){
	ShapeFactory *shapeFactory;
	Shape *shape;
	shape = shapeFactory->getShape();
	shape->draw();
}