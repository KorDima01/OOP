#include <iostream>
#include <string>
#include <vector>

using namespace  std;


class Animal3{
    string name;
    int years;
public:
    Animal3(string nm = "Tom",int ys = 0):name(nm),years(ys){}
};
class Dog:Animal3{
    string breed;
public:
    Dog(string brd):breed(brd){}
};
class Cat:Animal3{
    int childs;
public:
    Cat(int chld):childs(chld){}
};

int main() {
    Dog myDog("Buldog");

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
