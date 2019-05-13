#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
	double re, im;
public:
	Complex(double re = 0.0, double im = 0.0) {this->re = re, this->im = im;}
	double getRe() {
		return re;
	}
	double getIm() {
		return im;
	}
	double module() {
		return (sqrt(this->re * this->re + this->im * this->im));
	}
};

int main()
{
	Complex c(1.1, 2.0);
	cout << "Re: " << c.getRe() << " Im: " << c.getIm() << endl;
	cout << c.module() << endl;

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
