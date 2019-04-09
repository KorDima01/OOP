#ifndef Programm3_1
#define Programm3_1

class Book//определение класса
{
	private:
		string name;//поле класса для названия
		string author;//поле класса для автора
		int edition;//поле класса для издания
		string publisher;//поле класса для издательство
		double price;//поле класса для цены
	public:
		void define(string n, string a, int e, string pu, double p)//метод класса, изменяющий значения полей
		{
			name = n;
			author = a;
			edition = e;
			publisher = pu;
			price = p;
		}
		void display(void)//метод класса, отображающий значения полей
		{
			cout << "Название: " << name << "; Автор: " << author << "; Издание: " << edition << "; Издательсво: " << publisher << "; Цена: " << price << endl;
		}
};
int main()
{
	setlocale(0,"rus");//вывод на русском
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);//ввод на русском
	Book b;//определение объекта класса Book
	string n, a, pu;
	int e;
	double p;
	cout << "Введите название" << endl;
	getline(cin,n);
	cout << "Введите автора" << endl;
	getline(cin, a);
	cout << "Введите издательство" << endl;
	getline(cin, pu);
	cout << "Введите издание" << endl;
	cin >> e;
	cout << "Введите цену" << endl;
	cin >> p;
	b.define(n,a,e,pu,p);//вызов метода define()
	b.display();//вызов метода display
	system("pause");
	return 0;
}
#endif
