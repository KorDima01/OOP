#ifndef Programm3_2
#define Programm3_2

class Student
{
	private:
		string name;//поле имени
		string surname;//поле фамилии
		string midname;//поле отчества
		int mark[5];//поле оценки
	public:
		void define(string n, string s, string m, int ma[5])//Изменяющий значения
		{
			name = n;
			surname = s;
			midname = m;
			for (int i = 0; i < 5; i++)
				mark[i] = ma[i];
		}
		void display(void)//Отображающий значения
		{
			cout << "Имя: " << name << "; Фамилия: " << surname << "; Отчество: " << midname << "; Оценки: " << endl;
			for (int i = 0; i < 5; i++) cout << mark[i] << " ";
			cout << endl;
		}
};
class Group_S
{
 	private:
		string name;//название группы
		int number;//число студентов
		Student *st;//студенты
	public:
		void define(string n, int num)
		{
			name = n;
			number = num;
			st = new Student[num];
			string na, s, m;
			int ma[5];

			for(int i = 0; i<num;i++)
			{
				cin.ignore();
				cout << "Введите имя студента" << endl;
				getline(cin,na);
				cout << "Введите фамилию студента" << endl;
				getline(cin, s);
				cout << "Введите отчество студента" << endl;
				getline(cin, m);
				cout << "Введите оценки" << endl;
				for (int j = 0; j < 5; j++) cin >> ma[j];
				st[i].define(na,s,m,ma);
			}
		}
		void display(void)//Отображающий значения
		{
				cout << "Название группы: " << name << "; Количество студентов: " << number <<";" << endl;
				for (int i = 0; i < number; i++)
				{
					st[i].display();
					cout << endl;
				}
		}
		void delete_st(void)//Удаление массива
		{
			delete []st;
		}
};

void Programma3_2(){
  Group_S Group;
	string n;
	int num;
	cout << "Введите название группы" << endl;
	cin >> n;
	cout << "Введите количество студентов" << endl;
	cin >> num;
	Group.define(n,num);
	Group.display();
	Group.delete_st();
}

#endif
