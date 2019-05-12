#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>
using namespace std;

class Student {
	string name;
	string surname;
	int age;
public:
	Student(string &name, string &surname, int age) : name(name), surname(surname), age(age) {};

	string &getName() { return name;	}

	string &getSurname() { return surname; }

	int getAge() { return age; }
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<Student> students;

	for (int i = 0; i < 3; i++) {
		string name, surname;
		int age;
		cout << "Student " << i+1 << endl;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter surname: ";
		cin >> surname;
		cout << "Enter age: ";
		cin >> age;
		students.push_back(Student(name, surname, age));
	}

	for (auto a : students) {
		cout << endl << "Name: " << a.getName() << endl;
		cout << "Surname: " << a.getSurname() << endl;
		cout << "Age: " << a.getAge() << endl;
	}

	system("pause");
	return 0;
}
