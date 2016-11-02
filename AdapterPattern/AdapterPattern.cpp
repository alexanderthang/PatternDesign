#include <iostream>
#include <string>
using namespace std;


class ThreePinPlug{
private:
    float currentLimit;
    int model;
public:
    ThreePinPlug(float currentLimit, int model){
        this-> currentLimit = currentLimit;
        this->model = model;
    }
    void showNumOfPin(){
        cout << "this is a three-pin plug"<<endl;
    }
    void showInfo(){
        cout << model <<endl;
    }
};


class TwoPinPlug{
public:
    virtual void showNumOfPin() = 0;
};

class Adapter : public TwoPinPlug, private ThreePinPlug{
public:
    Adapter(float currentLimit, int model):ThreePinPlug(currentLimit, model){}
    void showNumOfPin(){
        cout << "This is a two-pin plug";
    }
};

int main(){
    TwoPinPlug *myTwoPinPlug = new Adapter(10, 2);
    myTwoPinPlug->showNumOfPin();
    return 0;
}