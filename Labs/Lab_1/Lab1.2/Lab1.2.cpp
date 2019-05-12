#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

const Complex readNumber(ifstream&);	// Считывает одно комплексное число из файла

int main() {
	ifstream f("complex.txt");

	int maxModule = -1;
	Complex max;

	int n;
	f >> n;

	for (int i = 0; i < n; i++) {
		Complex c;
		c = readNumber(f);
		if (c.countModule() > maxModule) {
			max = c;
			maxModule = c.countModule();
		}
	}

	cout << max << " has max module - " << max.countModule() << endl;

	f.close();
	system("pause");
	return 0;
}

const Complex readNumber(ifstream& f) {
	double re, im;
	f >> re >> im;
	f.get();
	return Complex(re, im);
}
