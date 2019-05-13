#include <iostream>
#include <string>
using namespace std;

class Child {
	string firstName;
	string lastName;
	int years;
public:
	void setData() {
		cout << "Enter firstName: ";
		cin >> firstName;
		cout << "Enter lastName: ";
		cin >> lastName;
		cout << "Enter years: ";
		cin >> years;
	}
	void getData() {
		cout << "firstName: " << firstName << endl;
		cout << "lastName: " << lastName << endl;
		cout << "years: " << years << endl;
	}
};


int main(int argc, const char * argv[]) {
	Child ch1, ch2;
	ch1.setData();
	ch1.getData();
	ch2.setData();
	ch2.getData();

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
