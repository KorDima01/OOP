#ifndef Programm3_4
#define Programm3_4
class Point//определение класса точки
{
	private:
		double x;//поле класса x
		double y;//поле класса y
		double z;//поле класса z
	public:
		void set(double n_x, double n_y, double n_z)//метод класса, изменяющий значения полей
		{
			x = n_x;
			y = n_y;
			z = n_z;
		}
		double get_x(void)//метод класса, отображающий  x
		{
			return x;
		}
		double get_y(void)//метод класса, отображающий y
		{
			return y;
		}
		double get_z(void)//метод класса, отображающий z
		{
			return z;
		}
		void display(void)//метод класса, отображающий значения полей
		{
			cout <<"x = " << x << "; y = " << y << "; z = " << z << endl;
		}
};
class Vector//определение класса
{
	private:
		Point begin;//поле класса для координаты начала
		Point end;//поле класса для координаты конца
	public:
		void define(Point b, Point e)//метод класса, изменяющий значения полей
		{
			begin.set(b.get_x(),b.get_y(),b.get_z());
			end.set(e.get_x(), e.get_y(), e.get_z());
		}
		void display(void)//метод класса, отображающий значения полей
		{
			cout << "Координата начала: " << endl;
			begin.display();
			cout << "Координата конца: " << endl;
			end.display();

		}
};
Vector v;//определение объекта класса Vector
  int x, y, z;
  Point b,e;
void Programma3_4(){

  	cout << "Введите координату начала (x,y,z)" << endl;
  	cin >> x >> y >> z;
  	b.set(x, y, z);
  	cout << "Введите координату конца (x,y,z)" << endl;
  	cin >> x >> y >> z;
  	e.set(x, y, z);

  	v.define(b,e);//вызов метода define()
  	v.display();//вызов метода display
}

#endif
