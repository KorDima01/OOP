#ifndef Programm8_2
#define Programm8_2

void Programma8_2(){
  ofstream file("a.txt");

	char c = 0;
		cin >> c;
	while (c != '\n') {
		file << c;
		cin.get(c);
	}

	file.close();
}

#endif
