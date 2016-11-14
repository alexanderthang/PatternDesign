class Shape{

};

class Square : public Shape{
private:
	float height;
public:
	float getHeight{
		return height;
	}
};

class Circle : public Shape{
private:
	float radius;
public:
	float getRadius(){
		return radius;
	}
};

class AreaCalculation{
public:
	float computeArea(Shape shape){
		if(shape is Square){
			//compute and show
		}else if(shape is Circle){
			//compute and show
		}
	}
};


class Shape{
	virtual float computeArea();
};

class Square : public Shape{
private:
	float height;
public:
	float getHeight{
		return height;
	}
	float computeArea(){

	}
};


class Circle : public Shape{
private:
	float radius;
public:
	float getRadius(){
		return radius;
	}
	float computeArea(){

	}
};
