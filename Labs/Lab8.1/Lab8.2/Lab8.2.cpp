#include <iostream>
#include <cmath>
#include <list>
using namespace std;

class Complex {
	double re;
	double im;
public:
	Complex(double re, double im) : re(re), im(im) {}

	Complex(const Complex& c) {
		re = c.re;
		im = c.re;
	}

	Complex operator= (const Complex& c) {
		return Complex(c.re, c.im);
	}

	void setNumber(double re, double im) {
		this->re = re;
		this->im = im;
	}

	double getModule() {
		return sqrt(re * re + im * im);
	}

	void displayData() {
		cout << "Number: " << re;
		if (im < 0) {
			cout << im << "i" << endl;
		} else {
			cout << "+" << im << "i" << endl;
		}
		cout << "Module: " << getModule() << endl;
	}

	~Complex() {}
};

int main() {
	list<Complex> l;

	for (int i = 0; i < 3; i++) {
		double re, im;
		cout << "Enter Re(x" << i+1 << "): ";
		cin >> re;
		cout << "Enter Im(x" << i+1 << "): ";
		cin >> im;
		l.push_back(Complex(re, im));
	}

	for (auto a : l) {
		cout << endl;
		a.displayData();
	}

	system("pause");
	return 0;
}
