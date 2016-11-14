
class Animal{
public:
	virtual void eat() = 0;
	virtual void sleep() = 0;
};
class Bird{
public:
	virtual void fly() = 0;
};
class Fish{
public:
	virtual void swim() = 0;
};

class PuppyDog : public Animal{
	void eat(){
		cout<<"eat";
	}
	void sleep(){
		cout<<"sleep";
	}
};
class NemoFish : public Animal, Fish{
	void eat(){
		cout<<"eat";
	}
	void sleep(){
		cout<<"sleep";
	}
	void swim(){
		cout<<"swim"<<endl;
	}
};

class FlappyBird : public Animal, Bird{
	void eat(){
		cout<<"eat";
	}
	void sleep(){
		cout<<"sleep";
	}
	void fly(){
		cout<<" fly"<<endl;
	}
}