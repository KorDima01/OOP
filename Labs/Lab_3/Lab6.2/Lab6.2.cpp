#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Alive {	// Базовый класс
protected:
	string name;
	int age;
public:
	Alive(string &name, int age) : name(name), age(age) {};

	string &getName() { return name; }

	int getAge() { return age; }

	virtual void move() = 0;
};

class Animal : public Alive {	// Производные классы
public:
	Animal(string &name, int age) : Alive(name, age) {};

	void move() { cout << name << " is running" << endl; }
};

class Fish : public Alive {
public:
	Fish(string &name, int age) : Alive(name, age) {};

	void move() { cout << name << " is swimming" << endl; }
};

class Bird : public Alive {
public:
	Bird(string &name, int age) : Alive(name, age) {};

	void move() { cout << name << " is flying";	}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;
	int age;

	cout << "Fish" << endl;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	Fish f(name, age);

	cout << endl << "Animal" << endl;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	Animal a(name, age);

	cout << endl << "Bird" << endl;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	Bird b(name, age);

	cout << endl << "Your bird" << endl << "Name: " << b.getName() << endl << "Age: " <<
			b.getAge() << endl;
	b.move();

	cout << endl << "Your fish" << endl << "Name: " << f.getName() << endl << "Age: " <<
			f.getAge() << endl;
	f.move();

	cout << endl << "Your animal" << endl << "Name: " << a.getName() << endl << "Age: " <<
			a.getAge() << endl;
	a.move();

	system("pause");
	return 0;
}
