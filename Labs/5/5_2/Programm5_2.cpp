#include <iostream>
using namespace std;

class Vector
{
	int x, y;
public:
	Vector(int x = 0, int y = 00) {
		this->x = x, this->y = y;
	}
	void operator=(Vector a) {
		x = a.x;
		y = a.y;
	}
	bool operator<(Vector a) {
		return x * x + y * y < a.x * a.x + a.y * a.y;
	}
	bool operator>(Vector a) {
		return x * x + y * y > a.x * a.x + a.y * a.y;
	}
	friend istream& operator>>(istream &in, Vector &a) {
		in >> a.x;
		in >> a.y;
		return in;
	}
	friend ostream& operator<<(ostream &out, Vector &a) {
		out << a.x << ' ' << a.y << endl;
		return out;
	}
};

int main()
{
	Vector a, b(1, 2), c(3, 4);
	a = b;
	cout << (a > c) ? 1 : 0;
	cout << endl;
	cout << a << endl;
	cout << a << endl;

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
