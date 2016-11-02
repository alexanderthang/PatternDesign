#include <iostream>
#include <string>
using namespace std;

class FlyBehavior{
public:
	virtual void fly() = 0;
};

class QuackBehavior{
public:
	virtual void quack() = 0;
};

class Duck{
	FlyBehavior *flyBehavior;
	QuackBehavior *quackBehavior;
public:
	void swim(){
		cout << "I'm swimming"<<endl;
	}
	virtual void display() =  0;
	void performQuack(){
		quackBehavior->quack();
	}
	void performFly(){
		flyBehavior->fly();
	}
	void setFlyBehavior(FlyBehavior *flyBehavior){
		this->flyBehavior = flyBehavior;
	}
	void setQuackBehavior(QuackBehavior *quackBehavior){
		this->quackBehavior = quackBehavior;
	}

};



class FlyWithWings : public FlyBehavior{
public:
	void fly(){
		cout << "I can fly with wings"<<endl;
	}
};

class FlyNoWay : public FlyBehavior{
public:
	void fly(){
		cout << "I can not fly"<<endl;
	}
};

class Quack : public QuackBehavior{
public:
	void quack(){
		cout << "quack quack quack"<<endl;
	}
};

class Squeak : public QuackBehavior{
public:
	void quack(){
		cout << "squeak squeak squeak"<<endl;
	}
};

class MuteQuack : public QuackBehavior{
public:
	void quack(){
		cout <<"I can not quack"<<endl;
	}
};

class MallardDuck : public Duck{
public:
	void display(){
		cout << "I'm an MallardDuck"<<endl;
	}
};

int main(){
	MallardDuck *mallarDuck = new MallardDuck;
	mallarDuck->setQuackBehavior(new Quack);
	mallarDuck->setFlyBehavior(new FlyWithWings);
	mallarDuck->performFly();
	mallarDuck->performQuack();
	return 0;

}
