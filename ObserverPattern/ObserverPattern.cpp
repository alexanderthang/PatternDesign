#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Observer {
protected:
	float temper;
	float humi;
	float pres;
public:
	virtual void update(float temper, float humi, float pres) = 0;
};

class DisplayElement {
public:
	virtual void display() = 0;
};
class CurrentConditions : public Observer, public DisplayElement{
public:
	void update(float temper, float humi, float pres) {
		this -> temper = temper;
		this->humi = humi;
		this->pres = pres;
		display();
	}
	void display() {
		cout << "Temperature: " << temper << endl;
		cout << "Humidity   : " << humi << endl;
		cout << "Pressure   : " << pres << endl;
	}
};

class Subject{
protected:
	float temper;
	float humi;
	float pres;
	vector<Observer *> obs;
public:
	virtual void registerObserver(Observer *o) = 0;
	virtual void notifyObservers() = 0;
};

class WeatherData : public Subject{
public:
	void registerObserver(Observer *o){
		obs.push_back(o);
	}
	void notifyObservers(){
		vector<Observer *>::iterator it;
		for(it = obs.begin(); it != obs.end(); it++){
			(*it) -> update(temper, humi, pres);
		}
	}
	void setMeasurements(float temper, float humi, float pres){
		this->temper = temper;
		this->humi = humi;
		this->pres = pres;
		notifyObservers();
	}
};
int main(){
	WeatherData *weatherData = new WeatherData;
	CurrentConditions *currentConditions = new CurrentConditions;
	weatherData->registerObserver(currentConditions);
	weatherData->setMeasurements(16, 80, 100);
	weatherData->setMeasurements(15, 85, 90);
}
