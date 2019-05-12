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

	void getData();	// Вывод данных на экран
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Tiles t1;
	cout << "Enter brand of the first tiles: ";
	cin >> t1.brand;
	cout << "Enter width of the first tiles: ";
	cin >> t1.size_w;
	cout << "Enter height of the first tiles: ";
	cin >> t1.size_h;
	cout << "Enter price of the first tiles: ";
	cin >> t1.price;

	Tiles t2;
	cout << "Enter brand of the first tiles: ";
	cin >> t2.brand;
	cout << "Enter width of the first tiles: ";
	cin >> t2.size_w;
	cout << "Enter height of the first tiles: ";
	cin >> t2.size_h;
	cout << "Enter price of the first tiles: ";
	cin >> t2.price;

	cout << "The first tiles" << endl;
	t1.getData();
	cout <<endl << "The second tiles" << endl;
	t2.getData();

	system("pause");
	return 0;
}

void Tiles::getData() {
	cout << "Brand: " << brand << endl;
	cout << "Width: " << size_w << endl;
	cout << "Height: " << size_h << endl;
	cout << "Price: " << price << endl;
}
