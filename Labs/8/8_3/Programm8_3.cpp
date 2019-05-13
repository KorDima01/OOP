#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Car
{
	string number, color, model;
public:
	Car(string number, string color, string model):number(number),
		color(color), model(model){}
	void getSpecification() {
		cout << "Model: " << model <<
			"\nColor: " << color << "\nNumber: " << number << endl;
	}
};


int main()
{
	queue<Car> c;
	Car c1("123", "blue", "123n");
	Car c2("321", "red", "321n");
	c.push(c1);
	c.push(c2);
	c.back().getSpecification();
	cout << endl;
	c.front().getSpecification();

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
