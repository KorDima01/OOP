#include <iostream>
#include <list>
using namespace std;

class Complex
{
	int re, im;
public:
	Complex(int re, int im) : re(re), im(im){}
	void getData() {
		cout << re << " + " << im << 'i' << endl;
	}
};

int main()
{
	list<Complex> d;
	Complex a(1, 2), b(3, 4), c(5, 6);
	d.push_back(a);
	d.push_back(b);
	d.push_back(c);

	d.back().getData();
	d.pop_back();
	d.back().getData();
	d.pop_back();
	d.back().getData();
	d.pop_back();

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
