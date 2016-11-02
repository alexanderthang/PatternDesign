
/*Simple Factory*/
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

class PhoneFactory {
public:
	Phone* makePhone(string userInput) {
		Phone *phone;
		if (userInput == "samsung") {
			phone = new Samsung;
		} else {
			phone =  new Apple;
		}
		phone ->name();
		phone ->pack();
		return phone;
	}
};


int main() {
	string userInput = "samsung";        /*simulate user input*/
	PhoneFactory *phoneFactory = new PhoneFactory;
	Phone *phone = phoneFactory->makePhone(userInput);
	return 0;
}