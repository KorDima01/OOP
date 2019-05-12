#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Animal {	// Базовый класс
protected:
	string name;
	int age;
public:
	Animal(string &name, int age) : name(name), age(age) {};

	string &getName() { return name; }

	int getAge() { return age; }

	virtual void talk() = 0;
};

class Dog : public Animal {	// Производные классы
public:
	Dog(string &name, int age) : Animal(name, age) {};

	void talk() { cout << "woof" << endl; }
};

class Cat : public Animal {
public:
	Cat(string &name, int age) : Animal(name, age) {};

	void talk() { cout << "meow" << endl; }
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;
	int age;

	cout << "Cat" << endl;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	Cat c(name, age);

	cout << endl << "Dog" << endl;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	Dog d(name, age);

	cout << endl << "Your dog" << endl << "Name: " << d.getName() << endl << "Age: " <<
			d.getAge() << endl;
	d.talk();

	cout << endl << "Your cat" << endl << "Name: " << c.getName() << endl << "Age: " <<
			c.getAge() << endl;
	c.talk();

	system("pause");
	return 0;
}
