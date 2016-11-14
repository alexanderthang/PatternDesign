#include <iostream>
using namespace std;
class Rectangle {
protected:
	int width;
	int height;
public:
	void setWidth(int width){
		this->width = width;
	}
	void setHeight(int height){
		this->height = height;
	}
	int getArea(){
		return width*height;
	}

};
class Square : public Rectangle{
public:
	void setWidth(int width){
		this->height = width;
		this->width = width;
	}
	void setHeight(int height){
		this->height = height;
		this->width = height;
	}
};

int main(){
	Square *rec = new Square;
	rec->setHeight(5);
	rec->setWidth(3);
	cout<<rec->getArea()<<endl;
 	return 0;
}
