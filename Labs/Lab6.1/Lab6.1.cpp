#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Student {	// базовый класс "Студент"
	string name;
	string surname;
	int age;
public:
	Student(string &name, string &surname, int age) : name(name), surname(surname), age(age) {};

	string &getName() { return name;	}

	string &getSurname() { return surname; }

	int getAge() { return age; }
};

class Headman : public Student {	// Класс "Староста", производный от "Студент"
	string phone;
	string email;
public:
	Headman(string &name, string &surname, int age, string &phone, string &email) :
		Student(name, surname, age), phone(phone), email(email) {};

	string &getEmail() { return email; }

	string &getPhone() { return phone; }

	friend const ostream& operator<< (ostream& out, const Headman& h);
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name, surname, phone, email;
	int age;

	cout << "Enter name: ";
	cin >> name;
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter phone: ";
	cin >> phone;
	cout << "Enter email: ";
	cin >> email;

	Headman h(name, surname, age, phone, email);

	cout << endl << "Information about headman:" << endl;
	cout << "Name: " << h.getName() << endl;
	cout << "Surname: " << h.getSurname() << endl;
	cout << "Age: " << h.getAge() << endl;
	cout << "Phone: " << h.getPhone() << endl;
	cout << "Email: " << h.getEmail() << endl;
	cout << "Crown phrase: " << h;
	cout << endl;

	system("pause");
	return 0;
}

const ostream& operator<< (ostream& out, const Headman& h) {
	out << "I am your headman!";
	return out;
}
