#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
	float height;
	float weight;
	float BMI;
public:
	void setHeight(float height) {
		this -> height = height;
	}
	void setWeight(float weight) {
		this -> weight = weight;
	}
	void computeBMI(){
		this -> BMI = weight / (height * height);
	}
	float getBMI(){
		return this -> BMI;
	}
	virtual string BMIcategory() = 0;  //overweight, normal, underweght
};

class Male : public Person{
public:
	string BMIcategory(user = English / Vietnamese) {
		float BMI = weight / (height * height);
		if (BMI < 20) {
			if(user = English)
			return "underweight";
			else{
				return "thieu can";
			}
		} else if (BMI < 30) {
			return "normal";
		} else {
			return "overweight";
		}
	}

};

class Female : public Person{
public:
	string BMIcategory() {
		float BMI = weight / (height * height);
		if (BMI < 18) {
			return "underweight";
		} else if (BMI < 25) {
			return "normal";
		} else {
			return "overweight";
		}
	}
};

int main(){
	Male *male = new Male;
	Female *female = new Female;

	male->setWeight(55);
	male->setHeight(1.7);
	male->computeBMI();
	cout<<male->BMIcategory()<<endl;

	female->setWeight(55);
	female->setHeight(1.7);
	male->computeBMI();
	cout<<female->BMIcategory()<<endl;
}