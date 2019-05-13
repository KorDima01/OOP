#include <iostream>
#include <cmath>
using namespace std;
class Vector {
public:
	int x, y;

	Vector() {}
	Vector(int x, int y) : x(x), y(y) {}
	double module() { return sqrt(x*x + y * y); };
	Vector sum(Vector b) {
		Vector res;
		res.x = this->x + b.x;
		res.y = this->y + b.y;
		return res;
	}

	Vector diff(Vector b) {
		Vector res;
		res.x = this->x - b.x;
		res.y = this->y - b.y;
		return res;
	}
};

int main()
{
	Vector a(1, 2), b(3, -4);
	cout << "Sum: " << a.sum(b).x << ' ' << a.sum(b).y << endl;
	cout << "module a: " << a.module() << endl;

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
