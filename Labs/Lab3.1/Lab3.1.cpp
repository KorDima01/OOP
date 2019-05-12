#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Child {
	string name;
	string surname;
	int age;
public:
	Child(string&, string&, int);

	void setName(string& name) { this->name = name;	}	// Методы ввода данных

	void setSurname(string& surname) { this->surname = surname;	}

	void setAge(int age) { this->age = age;	}

	void display();	// Вывод данных на экран
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

	cout << "Enter name of the second child: ";
	cin >> name;
	cout << "Enter surname of the second child: ";
	cin >> surname;
	cout << "Enter age of the second child: ";
	cin >> age;
	Child c2(name, surname, age);

	c1.display();
	c2.display();

	system("pause");
	return 0;
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
