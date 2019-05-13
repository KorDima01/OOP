#include <iostream>
#include <cmath>
#include <string>
using namespace std;


// :;0AA 87 3_1
class Child {
	string firstName;
	string lastName;
	int years;
public:
	Child(string firstName, string lastName, int years) :
		firstName(firstName), lastName(lastName), years(years) {}
	~Child() { firstName = ""; lastName = ""; years = 0;
	cout << "Object destroyed" << endl; }
	void setData() {
		cout << "Enter firstName: ";
		cin >> firstName;
		cout << "Enter lastName: ";
		cin >> lastName;
		cout << "Enter years: ";
		cin >> years;
	}
	void getData() {
		cout << "firstName: " << firstName << endl;
		cout << "lastName: " << lastName << endl;
		cout << "years: " << years << endl;
	}
};

// :;0AA 87 3_2
class Tiles {
public:
	string brand;
	int size_h, size_w, price;
	Tiles(string br,
		int s_h, int s_w, int pr) : size_h(s_h), size_w(s_w), brand(br),
		price(pr) {}
	~Tiles()
	{
		brand = "";
		size_h = 0;
		size_w = 0;
		price = 0;
		cout << "Object destroyed" << endl;
	}
	void getData() {
		cout << "Brand: " << brand << endl;
		cout << "Size_h: " << size_h << endl;
		cout << "Size_w: " << size_w << endl;
		cout << "Price: " << price << endl;
	}
};


class Complex
{
	double re, im;
public:
	Complex(double re = 0.0, double im = 0.0) { this->re = re, this->im = im; }
	double getRe() {
		return re;
	}
	double getIm() {
		return im;
	}
	double module() {
		return (sqrt(this->re * this->re + this->im * this->im));
	}
	~Complex()
	{
		re = 0;
		im = 0;
		cout << "Object destroyed" << endl;
	}
};


// :;0AA 87 3_4
class Vector {
public:
	int x, y;

	Vector() {}
	Vector(int x, int y) : x(x), y(y) {}
	double module() { return sqrt(x*x + y * y); };
	Vector sum(Vector b) {
		Vector res;
		res.x = this->x + b.x;
		res.y = this->y + b.y;
		return res;
	}

	Vector diff(Vector b) {
		Vector res;
		res.x = this->x - b.x;
		res.y = this->y - b.y;
		return res;
	}
	~Vector()
	{
		x = 0;
		y = 0;
		cout << "Object destroyed" << endl;
	}
};

int main()
{
	// 1
	Child ch("123", "456", 1);
	ch.getData();
	// 2
	Tiles t("789", 10, 11, 12);
	t.getData();
	// 3
	Complex c(1, 2);
	cout << c.module() << endl;
	// 4
	Vector v(3, 4);
	cout << v.module() << endl;

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
