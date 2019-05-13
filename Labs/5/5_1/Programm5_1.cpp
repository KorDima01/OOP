#include <iostream>
using namespace std;

class Complex
{
	int re, im;
public:
	Complex(double re = 0.0, double im = 0.0) {
		this->re = re, this->im = im;
	}
	void operator= (Complex a) {
		re = a.re;
		im = a.im;
	}
	bool operator<(Complex a) {
		return re * re + im * im < a.re*a.re + a.im*a.im;
	}
	bool operator>(Complex a) {
		return re * re + im * im > a.re*a.re + a.im*a.im;
	}
	friend const Complex operator++ (Complex& c, int) {
		Complex res(c);
		c.re++;
		c.im++;
		return res;
	}
	friend const Complex operator-- (Complex& c, int) {
		Complex res(c);
		c.re--;
		c.im--;
		return res;
	}

	friend istream& operator>>(istream &in, Complex &a) {
		in >> a.re;
		in >> a.im;
		return in;
	}
	friend ostream& operator<<(ostream &out, Complex &a) {
		out << a.re << ' ' << a.im << endl;
		return out;
	}
};

int main()
{
	Complex a, b(1, 2), c(3, 4);
	a = b;
	cout << (a > c) ? 1 : 0;
	cout << endl;
	cout << a << endl;
	a++;
	cout << a << endl;

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
