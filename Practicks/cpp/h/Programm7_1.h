#ifndef Programm7_1
#define Programm7_1
class Animal {	//класс Животное
protected:
	int legs;
	string name;
public:
	Animal(string&, int);

	void setName(string &name) { this->name = name; }

	string &getName() { return name; }

	void setLegs(int legs) { this->legs = legs; }

	int getLegs() { return legs; }

	virtual void say() = 0;	// Чисто виртуальная функция, выводящая на экран речь животного
};

class Cat : public Animal {	// Производный класс Кошка
public:
	Cat(string &name, int legs) : Animal(name, legs) {}

	void say() { cout << "meow" << endl; }
};

class Dog : public Animal {	// Производный класс Собака
public:
	Dog(string &name, int legs) : Animal(name, legs) {}

	void say() { cout << "woof" << endl; }
};

class Parrot : public Animal {	// Производный класс Попугай
public:
	Parrot(string &name, int legs) : Animal(name, legs) {}

	void say() { cout << "tweet" << endl; }
};

void Programma7_1(){
  string s1 = "Mur", s2 = "Doggy", s3 = "Vasili";
	Cat c(s1, 4);
	Dog d(s2, 4);
	Parrot p(s3, 2);
cout << "Dog goes ";
d.say();
cout << "Cat goes ";
c.say();
cout << "Bird goes ";
p.say();
cout << "But what does the fox say?" << endl;
}
Animal::Animal(string &name, int legs) {
	this->name = name;
	this->legs = legs;
}
#endif
