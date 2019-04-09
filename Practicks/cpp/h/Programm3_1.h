#ifndef Programm3_1
#define Programm3_1

class Book
{
	private:
		string name;
		string author;
		int edition;
		string publisher;
		double price;
	public:
		void define(string n, string a, int e, string pu, double p)//метод, изменяющий значения
		{
			name = n;
			author = a;
			edition = e;
			publisher = pu;
			price = p;
		}
		void display(void)//метод, отображающий значения
		{
			cout << "Название: " << name << "; Автор: " << author << "; Издание: " << edition << "; Издательсво: " << publisher << "; Цена: " << price << endl;
		}
};
#endif
