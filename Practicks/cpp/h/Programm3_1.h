#ifndef Programm3_1
#define Programm3_1

class Book
{
	private:
		string name;
		string author;
		string publisher;
	public:
		void define(string na, string au, string pub)//Изменяющий значения
		{
			name = na;
			author = au;
			publisher = pub;
		}
		void display(void)//Отображающий значения
		{
			cout << "Название: " << name << "; Автор: " << author << "; Издательсво: " << publisher << endl;
		}
};
Book book;
string na;
string au;
string pub;
void Programma3_1(){
  cout << "Введите название" << endl;
  cin >> na;
  cout << "Введите автора" << endl;
  cin >> au;
  cout << "Введите издательство" << endl;
  cin >> pub;
  book.define(na,au,pub);
  book.display();
}
#endif
