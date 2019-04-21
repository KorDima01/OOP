#ifndef Programm3_4
#define Programm3_4
class Point//определение класса точки
{
	private:
		double x;//поле класса x
		double y;//поле класса y
		double z;//поле класса z
	public:
		void set(double n_x, double n_y, double n_z)//метод, изменяющий значения
		{
			x = n_x;
			y = n_y;
			z = n_z;
		}
		double get_x(void)//метод, отображающий  x
		{
			return x;
		}
		double get_y(void)//метод, отображающий y
		{
			return y;
		}
		double get_z(void)//метод, отображающий z
		{
			return z;
		}
		void display(void)//метод, отображающий значения
		{
			cout <<"x = " << x << "; y = " << y << "; z = " << z << endl;
		}
};
class Vector
{
	private:
		Point begin;//координаты начала
		Point end;//координаты конца
	public:
		void define(Point bb, Point e)//метод класса, изменяющий значения полей
		{
			begin.set(bb.get_x(),bb.get_y(),bb.get_z());
			end.set(e.get_x(), e.get_y(), e.get_z());
		}
		void display(void)//значения полей
		{
			cout << "Координата начала: " << endl;
			begin.display();
			cout << "Координата конца: " << endl;
			end.display();

		}
};
Vector v;//определение объекта Vector
  int x, y, z;
  Point bb,e;
void Programma3_4(){

  	cout << "Введите координату начала (x,y,z)" << endl;
  	cin >> x >> y >> z;
  	bb.set(x, y, z);
  	cout << "Введите координату конца (x,y,z)" << endl;
  	cin >> x >> y >> z;
  	e.set(x, y, z);

  	v.define(bb,e);//вызов define()
  	v.display();//вызов display
}

#endif
