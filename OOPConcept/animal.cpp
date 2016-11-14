
class Animal{
public:
	virtual void eat() = 0;
	virtual void sleep() = 0;
	virtual void fly() = 0;

};

class Dog : public Animal{
	void eat(){
		cout<<"eat";
	}
	void sleep(){
		cout<<"sleep";
	}
	void fly(){
		cout<<"dog cant fly";
	}
};

class Cat : public Animal{
	void eat(){
		cout<<"eat";
	}
	void sleep(){
		cout<<"sleep";
	}
};

class Bird : public Animal{
	void eat(){
		cout<<"eat";
	}
	void sleep(){
		cout<<"sleep";
	}
	void fly(){
		cout<<"fly"<<endl;
	}
}