#ifndef Programm3_5
#define Programm3_5
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
class Library//определение класса
{
	private:
		string name;//поле класса для названия
		string address;//поле класса для адреса
		int number;//поле класса для колиства книг
		Book *books;//поле класса для книг
	public:
		void define(string n, string a, int num)//метод класса, изменяющий значения полей
		{
			name = n;
			address = a;
			number = num;
			books = new Book[num];
			string na, au, pu;
			int e;
			double p;
			for (int i = 0; i < num; i++)
			{
				cin.ignore();
				cout << "Введите название" << endl;
				getline(cin, na);
				cout << "Введите автора" << endl;
				getline(cin, au);
				cout << "Введите издательство" << endl;
				getline(cin, pu);
				cout << "Введите издание" << endl;
				cin >> e;
				cout << "Введите цену" << endl;
				cin >> p;
				books[i].define(na, au, e, pu, p);
			}

		}
		void display(void)//метод класса, отображающий значения полей
		{
				cout << "Название: " << name << "; Адрес: " << address << "; Количество книг: " << number << endl;
				for (int i = 0; i < number; i++)
				{
					books[i].display();
					cout << endl;
				}
		}
		void delete_b(void)//метод удаление массива
		{
			delete []books;
		}
};
Library l;//определение объекта класса Library
  string n, a;
  int num;
void Programma3_5(){

  	cout << "Введите название" << endl;
  	getline(cin, n);
  	cout << "Введите адрес" << endl;
  	getline(cin, a);
  	cout << "Введите количество книг" << endl;
  	cin >> num;

  	l.define(n,a,num);//вызов метода define()
  	l.display();//вызов метода display
  	l.delete_b();
}

#endif
