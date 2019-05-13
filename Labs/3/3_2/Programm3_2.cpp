#include <iostream>
#include <string>
using namespace std;

class Tiles {
public:
	string brand;
	int size_h, size_w, price;
	void getData() {
		cout << "Brand: " << brand << endl;
		cout << "Size_h: " << size_h << endl;
		cout << "Size_w: " << size_w << endl;
		cout << "Price: " << price << endl;
	}
};



int main()
{
	Tiles t1, t2;
	t1.brand = "Ferm"; t1.size_h = 15; t1.size_w = 10; t1.price = 30;
	t1.getData();
	t2.brand = "Organic"; t2.size_h = 5; t2.size_w = 6; t2.price = 70;
	t2.getData();

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
