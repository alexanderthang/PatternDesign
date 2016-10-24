#include "Shape.h"
#include "Rectangle.h"
enum SHAPE_TYPE{
		rectangle,
		circle
	};
class ShapeFactory{
public:
	Shape *getShape(){

		return new Rectangle();

	}
};