#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

class Tiles {
public:
	string brand;
	double size_w;
	double size_h;
	double price;

	Tiles(string& brand, double size_w, double size_h, double price) :
		brand(brand), size_w(size_w), size_h(size_h), price(price) {}

	Tiles(const Tiles&);

	Tiles operator= (const Tiles&);

	void getData();

	~Tiles() {}
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string brand;
	double size_w, size_h, price;
	cout << "Enter brand of the first tiles: ";
	cin >> brand;
	cout << "Enter width of the first tiles: ";
	cin >> size_w;
	cout << "Enter height of the first tiles: ";
	cin >> size_h;
	cout << "Enter price of the first tiles: ";
	cin >> price;

	Tiles t1(brand, size_w, size_h, price);
	Tiles t2(t1);
	Tiles t3 = t1;

	cout << "The first tiles" << endl;
	t1.getData();
	cout <<endl << "The second tiles" << endl;
	t2.getData();
	cout <<endl << "The third tiles" << endl;
	t3.getData();

	system("pause");
	return 0;
}

Tiles::Tiles(const Tiles& t) {
	this->brand = t.brand;
	this->price = t.price;
	this->size_h = t.size_h;
	this->size_w = t.size_w;
}

Tiles Tiles::operator= (const Tiles& t) {
	this->brand = t.brand;
	this->price = t.price;
	this->size_h = t.size_h;
	this->size_w = t.size_w;
	return *this;
}

void Tiles::getData() {
	cout << "Brand: " << brand << endl;
	cout << "Width: " << size_w << endl;
	cout << "Height: " << size_h << endl;
	cout << "Price: " << price << endl;
}
