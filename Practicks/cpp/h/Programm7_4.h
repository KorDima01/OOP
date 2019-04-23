#ifndef Programm7_4
#define Programm7_4
class Screen
{
protected:
	string Resolution;
public:
	Screen(string Resolution) { this->Resolution = Resolution; }
	virtual string printResolution() = 0;
};

class Keyboard
{
protected:
	string KeyboardLayout;
public:
	Keyboard(string KeyboardLayout) { this->KeyboardLayout = KeyboardLayout; }
	virtual string printKeyboardLayout() = 0;
};

class Notebook : public Screen, Keyboard
{
protected:
	string name = "Notebook";
public:
	Notebook(string Resolution, string KeyboardLayout) : Keyboard(KeyboardLayout), Screen(Resolution) {}
	string printKeyboardLayout()
	{
		return KeyboardLayout;
	};
	string printResolution()
	{
		return Resolution;
	};
};

class Phone : public Screen, Keyboard
{
protected:
	string name = "Mobile Phone";
public:
	Phone(string Resolution, string KeyboardLayout) : Keyboard(KeyboardLayout), Screen(Resolution) {}
	string printKeyboardLayout()
	{
		return KeyboardLayout;
	};
	string printResolution()
	{
		return Resolution;
	};
};

class PC : public Screen, Keyboard
{
protected:
	string name = "PC";
public:
	PC(string Resolution, string KeyboardLayout) : Keyboard(KeyboardLayout), Screen(Resolution) {}
	string printKeyboardLayout()
	{
		return KeyboardLayout;
	};
	string printResolution()
	{
		return Resolution;
	};
};

void Programma7_4(){
  string Resolution;
  string KeyboardLayout;
  cout << "ПК: " << endl;
  cout << "Введите разрешение экрана (например: 1920х1080): ";
  cin >> Resolution;
  cout << "Введите раскладку клавиатуры (например QWERTY): ";
	cin >> KeyboardLayout;
	PC p(Resolution, KeyboardLayout);
	cout << "Телефон: " << endl;
	cout << "Введите разрешение экрана (например: 1920х1080): ";
	cin >> Resolution;
  cout << "Введите раскладку клавиатуры (например QWERTY): ";
	cin >> KeyboardLayout;
	Phone phon(Resolution, KeyboardLayout);
  cout << "Ноутбук: " << endl;
  cout << "Введите разрешение экрана (например: 1920х1080): ";
  cin >> Resolution;
  cout << "Введите раскладку клавиатуры (например QWERTY): ";
	cin >> KeyboardLayout;
  Notebook r(Resolution, KeyboardLayout);
  cout << "ПК: " << endl << "разрешение экрана: " << p.printResolution() << endl <<	"Раскладка клавиатуры: " << p.printKeyboardLayout() << endl;
	cout << "Телефон: " << endl << "разрешение экрана: " << phon.printResolution() << endl <<	"Раскладка клавиатуры: " << phon.printKeyboardLayout() << endl;
	cout << "Ноутбук: " << endl << "разрешение экрана: " << r.printResolution() << endl <<	"Раскладка клавиатуры: " << r.printKeyboardLayout() << endl;
}

#endif
