#include <iostream>
#include <cmath>
using namespace std;

class Complex {
	double re;
	double im;
public:
	Complex(double re, double im) {	setNumber(re, im); }

	void setNumber(double, double);	// Получает мнимую и действительную части числа

	double getModule() { return sqrt(re * re + im * im); }	// Возвращает модуль

	void displayData();	// Выводит информацию о числе на экран
};

int main() {
	double re, im;
	cout << "Enter Re(a): ";
	cin >> re;
	cout << "Enter Im(a): ";
	cin >> im;
	Complex c1(re, im);

	cout << "Enter Re(b): ";
	cin >> re;
	cout << "Enter Im(b): ";
	cin >> im;
	Complex c2(re, im);

	c1.displayData();
	c2.displayData();

	system("pause");
	return 0;
}

void Complex::setNumber(double re, double im) {
	this->re = re;
	this->im = im;
}

void Complex::displayData() {
	cout << "Number: " << re;
	if (im < 0) {
		cout << im << "i" << endl;
	} else {
		cout << "+" << im << "i" << endl;
	}
	cout << "Module: " << getModule() << endl;
}
