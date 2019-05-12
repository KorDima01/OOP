#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Child {
	string name;
	string surname;
	int age;
public:
	Child(string&, string&, int);	// Конструкторы класса

	Child(const Child&);

	Child operator= (const Child&);

	void setName(string& name) { this->name = name; }	// Методы ввода данных

	void setSurname(string& surname) { this->surname = surname;	}

	void setAge(int age) { this->age = age;	}

	void display();	// Выводит данные на экран

	~Child() {}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name, surname;
	int age;
	cout << "Enter name of the first child: ";
	cin >> name;
	cout << "Enter surname of the first child: ";
	cin >> surname;
	cout << "Enter age of the first child: ";
	cin >> age;
	Child c1(name, surname, age);

	Child c2(c1);
	Child c3 = c2;

	c1.display();
	c2.display();
	c3.display();

	system("pause");
	return 0;
}

Child Child::operator= (const Child& c) {
	this->name = c.name;
	this->age = c.age;
	this->surname = c.surname;
	return *this;
}

Child::Child(const Child& c) {
	name = c.name;
	surname = c.surname;
	age = c.age;
}

Child::Child(string& name, string& surname, int age) {
	setName(name);
	setSurname(surname);
	setAge(age);
}

void Child::display() {
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Age: " << age << endl;
}
