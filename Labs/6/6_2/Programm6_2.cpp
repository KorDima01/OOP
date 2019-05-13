#include <iostream>
#include <string>
using namespace std;

class Alive {
	string name;
	int years;
public:
	Alive(string nm = "", int y = 0) :name(nm), years(y) {}
	void setData(string name, int years) {
		this->name = name;
		this->years = years;
	}
	string getName() { return name; }
	int getYears() { return years; }
};

class Bird :public Alive {
	int countWings;
public:
	Bird(int wg) :countWings(wg) {}
	int getCountWings() { return countWings; }
};

class Fish :public Alive {
	string type;
public:
	Fish(string tp) :type(tp) {}
	string getType() { return type; }
};

class Animal :public Alive {
	string type_animal;
public:
	Animal(string tpAn) :type_animal(tpAn) {}
	string getType() { return type_animal; }
};

int main()
{
	Animal a("123");
	Fish b("MoonFish");
	Bird c(10);

	a.setData("111", 2);
	b.setData("222", 3);
	c.setData("333", 2);

	cout << "Animal\nType animal: " << a.getType() <<
		"\nName of animal: " << a.getName() <<
		"\nYears: " << a.getYears() << endl;
	cout << "Fish\nType animal: " << b.getType() <<
		"\nName of animal: " << b.getName() <<
		"\nYears: " << b.getYears() << endl;
	cout << "Bird\nCount wings: " << c.getCountWings() <<
		"\nName of animal: " << c.getName() <<
		"\nYears: " << c.getYears() << endl;


		cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
		cin.get();
		cin.get();
		return 0;

}
