/* Author Alexander 
   Created date: 2/Nov/2016*/
#include <iostream>
#include <string>
using namespace std;


class Board {
public:
	virtual void showBoard() = 0;
};

class ExpensiveBoard : public Board {
public:
	void showBoard() {
		cout << "this is an expensive board" << endl;
	}
};

class CheapBoard : public Board {
public:
	void showBoard() {
		cout << "This is a cheap board" << endl;
	}
};

class Monitor {
public:
	virtual void showMonitor() = 0;
};

class ExpensiveMonitor : public Monitor {
public:
	void showMonitor() {
		cout << "This is an expensive monitor" << endl;
	}
};

class CheapMonitor : public Monitor {
public:
	void showMonitor() {
		cout << "This is a cheap monitor" << endl;
	}
};

class AbstractFactory {
public:
	virtual Board *makeBoard() = 0;
	virtual Monitor *makeMonitor() = 0;
};

class ExpensivePhoneFactory : public AbstractFactory {
public:
	Board *makeBoard() {
		return new ExpensiveBoard;
	}
	Monitor *makeMonitor() {
		return new ExpensiveMonitor;
	}
};

class MediumPhoneFactory : public AbstractFactory {
public:
	Board *makeBoard() {
		return new CheapBoard;
	}
	Monitor *makeMonitor() {
		return new ExpensiveMonitor;
	}
};

class CheapPhoneFactory : public AbstractFactory {
public:
	Board *makeBoard() {
		return new ExpensiveBoard;
	}
	Monitor *makeMonitor() {
		return new ExpensiveMonitor;
	}
};

class PhoneAssembler {

private:
	AbstractFactory *factoryType;
public:
	typedef enum {
		EXPENSIVE_PHONE,
		MEDIUM_PHONE,
		CHEAP_PHONE
	} PHONE_TYPE;
	PhoneAssembler(PHONE_TYPE type) {
		if (type == EXPENSIVE_PHONE) {
			factoryType = new ExpensivePhoneFactory;
		} else if (type == MEDIUM_PHONE) {
			factoryType = new MediumPhoneFactory;
		} else {
			factoryType = new CheapPhoneFactory;
		}
	}
	void assemble() {
		Board *board = factoryType->makeBoard();
		Monitor *monitor = factoryType->makeMonitor();
		board->showBoard();
		monitor->showMonitor();
		cout << "The phone is assembled" << endl;
	}

};
int main() {
	PhoneAssembler::PHONE_TYPE userInput = PhoneAssembler::EXPENSIVE_PHONE;        /*simulate user input*/
	PhoneAssembler *phoneAssembler = new PhoneAssembler(userInput);
	phoneAssembler->assemble();
	return 0;
}