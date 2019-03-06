#include <fstream>

#ifndef Programm8_1
#define Programm8_1

void Programma8_1(){

  	ifstream file("a.txt");

  	while (!file.eof()) {
  		string s;
  		file >> s;
  		cout << s << endl;
  	}

  	file.close();
}

#endif
