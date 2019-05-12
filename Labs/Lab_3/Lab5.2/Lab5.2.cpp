#include <iostream>
#include <cmath>
using namespace std;

class Vector {
	double x;
	double y;
	double z;
public:
	Vector() : x(0), y(0), z(0) {}

	Vector(double x, double y, double z) : x(x), y(y), z(z) {};

	Vector(const Vector& v);

	Vector operator= (const Vector& v);

	friend Vector operator+ (const Vector& v1, const Vector& v2);

	friend Vector operator- (const Vector& v1, const Vector& v2);

	friend const bool operator== (const Vector& v1, const Vector& v2);

	friend const istream& operator>> (istream& in, Vector& v);

	friend const ostream& operator<< (ostream& out, const Vector& v);
};

int main() {
	cout << "Set coordinates of the vector:";
	Vector v1;
	cin >> v1;
	Vector v2 = v1;

	if (v1 == v2) {
		cout << v1 + v2;
	}
	cout << endl;

	system("pause");
	return 0;
}

Vector::Vector(const Vector& v) {
	x = v.x;
	y = v.y;
	z = v.z;
}

Vector Vector::operator= (const Vector& v) {
	return Vector(v.x, v.y, v.z);
}

Vector operator+ (const Vector& v1, const Vector& v2) {
	return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}

Vector operator- (const Vector& v1, const Vector& v2) {
	return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}

const bool operator== (const Vector& v1, const Vector& v2) {
	return (v1.x == v2.x) && (v1.y == v2.y) && (v1.z == v2.z);
}

const istream& operator>> (istream& in, Vector& v) {
	in >> v.x >> v.y >> v.z;
	return in;
}

const ostream& operator<< (ostream& out, const Vector& v) {
	out << v.x << " " << v.y << " " << v.z;
	return out;
}
