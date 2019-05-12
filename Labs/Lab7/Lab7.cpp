#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Human {
protected:
	string name;
	string surname;
	string midname;
	int age;
public:
	Human() : name(""), surname(""), midname(""), age(0) {};

	Human(string surname, string name, string midname, int age) :
		name(name), surname(surname), midname(midname), age(age) {};

	virtual void print() = 0;

	~Human() {}
};

class Student : public Human {
	bool on_lesson;
public:
	Student() : Human(), on_lesson(false) {};

	Student(string surname, string name, string midname, int age, bool on_lesson) :
		Human(surname, name, midname, age), on_lesson(on_lesson) {};

	void print();

	~Student() {};
};

class Boss : public Human {
	int number_of_workers;
public:
	Boss() : Human(), number_of_workers(0) {};

	Boss(string surname, string name, string midname, int age, int number_of_workers) :
		Human(surname, name, midname, age), number_of_workers(number_of_workers) {};

	void print();

	~Boss() {};
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string surname, name, midname;
	int age, number_of_workers;
	bool on_lesson;

	cout.setf(ios::boolalpha);

	cout << "Student" << endl;
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter midname: ";
	cin >> midname;
	cout << "Enter age: ";
	cin  >> age;
	cout << "Is on lesson? (1 - yes, 0 - no): ";
	cin >> on_lesson;

	Student s(surname, name, midname, age, on_lesson);

	cout << endl << "Boss" << endl;
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter midname: ";
	cin >> midname;
	cout << "Enter age: ";
	cin  >> age;
	cout << "Enter number of workers: ";
	cin >> number_of_workers;

	Boss b(surname, name, midname, age, number_of_workers);
	s.print();
	b.print();

	system("pause");
	return 0;
}

void Student::print() {
	cout << "Name: " << surname << " " << name << " " << midname << endl;
	cout << "Age: " << age << endl;
	cout << "Is on lesson: " << on_lesson << endl;
}

void Boss::print() {
	cout << "Name: " << surname << " " << name << " " << midname << endl;
	cout << "Age: " << age << endl;
	cout << "Number of workers: " << number_of_workers << endl;
}
