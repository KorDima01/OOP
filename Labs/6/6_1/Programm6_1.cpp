#include <iostream>
#include <string>
using namespace std;

class Student
{
	string name, lastname;
public:
	void setName(string name, string lastname) {
		this->name = name;
		this->lastname = lastname;
	}
	void getName() {
		cout << "Name: " << name << "\nLastname: " << lastname << endl;
	}
};

class Headman :public Student
{
	string email, group;
public:
	Headman(string email,string group) : email(email), group(group){}
	void getIdOfGroup() {
		cout <<"id: " << group << endl;
	}
};

int main()
{
	Headman h("@111", "INBO-04-18");
	h.setName("Dmitriy", "Korneev");
	cout << "Headman \n"; // староста
	h.getName();
	h.getIdOfGroup();

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
