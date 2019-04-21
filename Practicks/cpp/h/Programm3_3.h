#ifndef Programm3_3
#define Programm3_3
class Auto//определение класса
{
	private:
		string brand;//поле класса для марки
		string model;//поле класса для модели
		string color;//поле класса для цвета
		string number;//поле класса для номера
	public:
		void define(string b, string m, string c, string nn)//метод класса, изменяющий значения полей
		{
			brand = b;
			model = m;
			color = c;
			number = nn;
		}
		void display(void)//метод класса, отображающий значения полей
		{
			cout << "Марка: " << brand << "; Модель: " << model << "; Цвет: " << color << "; Номер: " << number<< endl;
		}
};
Auto a;//определение объекта класса Auto
string b,m,c,nn;
void Programma3_3(){

  	cout << "Введите марку автомобиля" << endl;
  	cin >> b;
  	cout << "Введите модель автомобиля" << endl;
  	cin >> m;
  	cout << "Введите цвет автомобиля" << endl;
  	cin >> c;
  	cout << "Введите номер автомобиля" << endl;
  	cin >> nn;
  	a.define(b,m,c,nn);//вызов метода define()
  	a.display();//вызов метода display
}

#endif
