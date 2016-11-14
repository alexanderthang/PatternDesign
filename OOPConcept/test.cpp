class BaseClass {
public:
	getName();
	setName();
	virtual void show() {
		cout << "This is base class" << endl;
	}
};

class DerivedClass : public BaseClass {
private:
	string name;
public:
	string getName();
	void setName(string name){

	}
	void show() {
		cout << "This is derived class" << endl;
	}
	void spt(){

	}
}
main(){
	BaseClass *temp = new DerivedClass;
	temp->spt();
}