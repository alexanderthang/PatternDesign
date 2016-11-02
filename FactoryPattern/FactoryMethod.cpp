/* Author Alexander 
   Created date: 2/Nov/2016*/
#include <iostream>
#include <string>
using namespace std;

class Phone {
public:
	virtual void name() = 0;
	void pack() {
		cout << "This phone is packed and sent to you soon" << endl;
	}
};

class Samsung : public Phone {
public:
	void name() {
		cout << "This is a brand new Samsung phone" << endl;
	}
};

class Apple : public Phone {
public:
	void name() {
		cout << "This is a brand new Iphone" << endl;
	}
};

class LikeNewSamsung: public Phone {
public:
	void name() {
		cout << "This is a like new Samsung phone"<< endl;
	}
};

class LikeNewApple: public Phone {
public:
	void name() {
		cout << "This is a like new Apple phone"<< endl;
	}
};


class PhoneFactory {
public:
	Phone *makePhone(string userInput) {
		Phone *phone = this -> getPhone(userInput);
		phone->name();
		phone->pack();
		return phone;
	}
	virtual Phone *getPhone(string userInput) = 0;
};
class BrandNewPhoneFactory : public PhoneFactory{
public:
	Phone *getPhone(string userInput) {
		if (userInput == "samsung") {
			return new Samsung;
		} else {
			return  new Apple;
		}
	}
};

class LikeNewPhoneFactory : public PhoneFactory{
public:
	Phone *getPhone(string userInput) {
		if (userInput == "samsung") {
			return new LikeNewSamsung;
		} else {
			return new LikeNewApple;
		}
	}
};


int main() {
	string userInput = "samsung";        /*simulate user input*/
	PhoneFactory *phoneFactory = new LikeNewPhoneFactory;
	Phone *phone = phoneFactory->makePhone(userInput);
	return 0;
}