#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Item {
protected:
	string name;
public:
	Item(string name) {
		this->name = name;
	}
	string getName(){
		return this->name;
	}
	virtual void del() = 0;
	//virtual void add(Item *item) = 0;
};

class File : public Item {
public:
	File(string name) : Item(name) {}
	void del() {
		cout << "del " << this->name << endl;
	}
};
class Folder : public Item{
public:
	vector<Item *> items;
public:
	Folder(string name) : Item(name){}
	void del(){
		vector<Item *>::iterator it;
		for(it = items.begin(); it != items.end(); it++){
			(*it) -> del();
		}
		cout << "del " << this->name << endl;
	}
	void add(Item *item){
		cout << "add " << item->getName() << endl;
		items.push_back(item);
	}

};
int main(){
	Item *file1 = new File("file 1");
	Item *file2 = new File("file 2");

	Folder *folder1 = new Folder("folder 1");
	Folder *folder2 = new Folder("folder 2");
	Folder *folder3 = new Folder("folder 3");
	//folder1->add(file1);
	folder1->add(folder2);
	folder2->add(file2);
	folder2->add(folder3);
	folder1->del();
	//*((folder1->items).begin())->add(file1);
}