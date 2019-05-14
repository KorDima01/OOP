#include <iostream>
#include <string>
using namespace std;

class Human {
	string surname, name, midname;
	int age;
public:
	Human() {
		surname = "111";
		name = "222";
		age = 18;
	}
	Human(string n, string sn, string mn, int ag) :name(n), surname(sn), midname(mn), age(ag) {}
	~Human() {
		midname = "";
		surname = "";
		name = "";
		age = 0;
	}
	virtual void print() = 0;

};

class Student :Human {
	bool on_lesson;
public:
	Student() :Human(), on_lesson(0) {}
	Student(string n, string sn, string mn, int ag, bool ol) :Human(n, sn, mn, ag), on_lesson(ol) {}
	void print() {
		if (on_lesson)
			cout << "On lesson? True" << endl;
		else
			cout << "On lesson? False" << endl;
	}
	~Student() {
		on_lesson = false;
	}

};

class Boss :Human {
	int number_of_workers;
public:
	Boss() :Human(), number_of_workers(0) {}
	Boss(string n, string sn, string mn, int ag, int now) :Human(n, sn, mn, ag), number_of_workers(now) {}
	void print() {
		cout << "Number of workers: " << number_of_workers << endl;
	}
	~Boss() {
		number_of_workers = 0;
	}
};

int main()
{
	Student s("123", "456", "789", 18, 1);
	s.print();
	Boss b("987", "654", "321", 54, 100);
	b.print();

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
