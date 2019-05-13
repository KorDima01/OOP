#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Animal {
	string name;
	int years;
public:
	Animal(string nm = "Tom", int ys = 0) :name(nm), years(ys) {}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	virtual void say() = 0 {}
};
class Dog :public Animal {
	string breed;
public:
	Dog(string brd) :breed(brd) {}
	void say() override  {
		cout << "Woof" << endl;
	}
};
class Cat :public Animal {
	int childs;
public:
	Cat(int chld) :childs(chld) {}
	void say() override {
		cout << "Meow" << endl;
	}
};


int main(int argc, const char* argv[]) {
	Dog d("Taksa");
	Cat c(3);

	d.setName("Dog");
	c.setName("Cat");
	cout << d.getName() << ": ";
	d.say();
	cout << c.getName() << ": ";
	c.say();

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
