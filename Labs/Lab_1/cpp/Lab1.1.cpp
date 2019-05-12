#include <iostream>
#include "Complex.h"
#include "Complex.cpp"
using namespace std;

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

	cout << "a + b = " << c1 + c2 << endl;
	cout << "a - b = " << c1 - c2 << endl;
	cout << "a * b = " << c1 * c2 << endl;
	cout << "a / b = " << c1 / c2 << endl;

	cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
	cin.get();
	cin.get();
	return 0;
}
