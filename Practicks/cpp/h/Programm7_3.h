#ifndef programm7_3
#define Programm7_3
class Transport {	//класс транспорт
protected:
	int wheels;
public:
	Transport(int);

	void setwheels(int wheels) { this->wheels = wheels; }

	int getwheels() { return wheels; }

	virtual void beep() = 0;
};

class Carr : public Transport {
public:
	Carr(int wheels) : Transport(wheels) {}

	void beep() { cout <<  this->wheels; }
};

class Bus : public Transport {
public:
	Bus(int wheels) : Transport(wheels) {}

	void beep() { cout << this->wheels; }
};

class Bicycle : public Transport {
public:
	Bicycle(int wheels) : Transport(wheels) {}

	void beep() { cout << this->wheels; }
};

void Programma7_3(){
	Carr ca(4);
	Bus bu(6);
	Bicycle bi(2);
cout << "Bus has ";
bu.beep();
cout << " wheels" << endl;
cout << "Car has ";
ca.beep();
cout << " wheels" << endl;
cout << "Bicycle has ";
bi.beep();
cout << " wheels" << endl;
}
Transport::Transport(int wheels) {
	this->wheels = wheels;
}
#endif
