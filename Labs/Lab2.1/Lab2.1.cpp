#include <iostream>
using namespace std;

double taxOverMil(double value);	// Вычисляет налог на сумму больше миллиона

double taxLessMil(double value);	// Вычисляет налог на сумму до миллиона

double (*getTax)(double value);	// Выбирает, как вычислять налог

int main() {
	double income;
	cout << "Enter your income: ";
	cin >> income;

	if (income > 1000000) {
		getTax = taxOverMil;
	} else {
		getTax = taxLessMil;
	}

	cout << "Your tax: " << getTax(income) << endl;

	system("pause");
	return 0;
}

double taxOverMil(double value) {
	return value * 0.2;
}

double taxLessMil(double value) {
	return value * 0.1;
}
