#ifndef Programm3_5
#define Programm3_5
class Bookk//определение класса
{
private:
	string name;//поле названия
	string author;//поле aвтора
	string publisher;//поле издательствa
	double price;//поле цены
public:
	void define(string nnn, string aa, string pu, double p)//метод, изменяющий значения
	{
		name = nnn;
		author = aa;
		publisher = pu;
		price = p;
	}
	void display(void)//метод, отображающий значения
	{
		cout << "Название: " << name << "; Автор: " << author << "; Издательсво: " << publisher << "; Цена: " << price << endl;
	}
};
class Library
{
	private:
		string name;//поле названия
		string address;//поле адреса
		int number;//поле колиства книг
		Bookk *bookks;//поле книг
	public:
		void define(string nnn, string aa, int numm)//метод, изменяющий значения
		{
			name = nnn;
			address = aa;
			number = numm;
			bookks = new Bookk[numm];
			string na, au, pu;
			int e;
			double p;
			for (int i = 0; i < numm; i++)
			{
				cin.ignore();
				cout << "Введите название" << endl;
				cin >> na;
				cout << "Введите автора" << endl;
				cin >> au;
				cout << "Введите издательство" << endl;
				cin >> pu;
				cout << "Введите цену" << endl;
				cin >> p;
				bookks[i].define(na, au, pu, p);
			}

		}
		void display(void)//метод, отображающий значения
		{
				cout << "Название: " << name << "; Адрес: " << address << "; Количество книг: " << number << endl;
				for (int i = 0; i < number; i++)
				{
					bookks[i].display();
					cout << endl;
				}
		}
		void delete_b(void)//метод удаление массива
		{
			delete []bookks;
		}
};
Library l;//определение объекта класса Library
  string nnn, aa;
  int numm;
void Programma3_5(){

  	cout << "Введите название" << endl;
  	cin >> nnn;
  	cout << "Введите адрес" << endl;
  	cin >> aa;
  	cout << "Введите количество книг" << endl;
  	cin >> numm;

  	l.define(nnn,aa,numm);//вызов метода define()
  	l.display();//вызов метода display
  	l.delete_b();
}

#endif
