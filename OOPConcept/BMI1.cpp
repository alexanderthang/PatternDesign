#include <iostream>
#include <string>
using namespace std;

typedef enum{
	UNDER_WEIGHT,
	NORMAL,
	OVER_WEIGHT
} BMI_TYPE;

class BMILogger{
public:
	virtual string logBMIcategory(BMI_TYPE type) = 0;
};
class VietnameseIBMLogger : public BMILogger{
public:
	string logBMIcategory(BMI_TYPE type){
		if(type == UNDER_WEIGHT){
			return "Thieu can";
		}else if(type == NORMAL){
			return "Binh thuong";
		}else{
			return "Thua can";
		}
	}
};

class EnglishIBMLogger : public BMILogger{
public:
	string logBMIcategory(BMI_TYPE type){
		if(type == UNDER_WEIGHT){
			return "Underweight";
		}else if(type == NORMAL){
			return "Normal";
		}else{
			return "Overweight";
		}
	}
};
class JapaneseIBMLogger : public BMILogger{
public:
	string logBMIcategory(BMI_TYPE type){
		if(type == UNDER_WEIGHT){
			return "fadsf";
		}else if(type == NORMAL){
			return "fadf";
		}else{
			return "fdasf";
		}
	}
};


class Person {
protected:
	float height;
	float weight;
	float BMI;
	BMILogger *logger;
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
	string BMIcategory() {
		logger = new VietnameseIBMLogger;
		BMI_TYPE type;
		if (BMI < 20) {
			type = UNDER_WEIGHT;
		} else if (BMI < 30) {
			type = NORMAL;
		} else {
			type = OVER_WEIGHT;
		}
		return logger -> logBMIcategory(type);
	}
	a();
};

class Female : public Person{
public:
	string BMIcategory() {
		logger = new EnglishIBMLogger;
		BMI_TYPE type;
		if (BMI < 18) {
			type = UNDER_WEIGHT;
		} else if (BMI < 25) {
			type = NORMAL;
		} else {
			type = OVER_WEIGHT;
		}
		return logger -> logBMIcategory(type);
	}
};


int main(){
	Person *male = new Male;
	Person *female = new Female;

	Male *person;
	string input;
	if(input == "male"){
		person = new Male;
	}else{
		person = new Female;
	}


	male->setWeight(55);
	male->setHeight(1.7);
	male->computeBMI();
	cout<<male->BMIcategory()<<endl;

	female->setWeight(55);
	female->setHeight(1.7);
	female->computeBMI();
	cout<<female->BMIcategory()<<endl;
}