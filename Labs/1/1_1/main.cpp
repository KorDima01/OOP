#include <iostream>
#include "Complex.cpp"
#include <vector>
#include <fstream>
using namespace std;

int main() {
    ifstream file("Test.txt");
    int n,r,m;
    vector<Complex> p;
    file >> n;
    for (int i = 0; i < n;i++){
        file >> r >> m;
        Complex el(r,m);
        p.push_back(el);
    }
    file.close();
    Complex max;
    double md = p[0].module();
    for (int i = 0;i < n;i++)
        if (p[i].module() > md){
            md = p[i].module();
            max = p[i];
        }
    cout << max.printRe() << ' ' << max.printIm() << endl;
	cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
	cin.get();
	return 0;
}
