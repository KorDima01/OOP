#include <iostream>
#include <string>
#include <queue>
#include <Windows.h>
using namespace std;

class Client {
	string name;
	string car;
public:
	Client(string& name, string& car) : name(name), car(car) {};

	void getData();	// Печатает информацию о клиенте
};

int main() {
	queue<Client> q;	// Создаётся очередь из объектов класса Client

	for (int i = 0; i < 3; i++) {
		string name, car;
		cout << "Client " << i+1 << endl;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter car model: ";
		cin >> car;
		q.push(Client(name, car));	// В конец очереди ставится новый объект
	}

	cout << "Queue" << endl;
	for (int i = 1; !q.empty(); i++) {
		cout << i;
		q.front().getData();	// Берётся первый объект из очереди
		q.pop();	// Удаляется первый объект очереди
	}

	system("pause");
	return 0;
}

void Client::getData() {
	cout << endl << "Name: " << name << endl;
	cout << "Car: " <<  car << endl;
}
