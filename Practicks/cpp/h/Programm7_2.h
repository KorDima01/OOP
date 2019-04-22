#ifndef Programm7_2
#define Programm7_2
class Shape// абстрактный класс фигура
{
	protected:
		double s;
	public:
		virtual double square() = 0;
};
class Quadrilateral : Shape // абстрактный класс четырехугольник
{
	protected:
		double a, b;
	public:
		Quadrilateral(double a1, double a2)
		{
			a = a1;
			b = a2;
		};
};
class Rhombus : Quadrilateral//подкласс ромб
{
	private:
		double sn;
	public:
		Rhombus(double a1, double a2, double s) : Quadrilateral(a1, a2) { sn = s; };
		double square()
		{
			return a*b*sin(sn*3.14 / 180);
		}
};
class Rectangle : Quadrilateral//подкласс прямоугольник
{
public:
	Rectangle(double a1, double a2) : Quadrilateral(a1, a2) {};
	double square()
	{
		return a*b;
	}
};
void Programma7_2(){
  double a, b;
  	cout << "Введите сторону а затем угол ромба" << endl;
  	cin >> a >> b;
  	Rhombus rh(a, a, b);
  	cout << "Ввдите стороны прямоугольника" << endl;
  	cin >> a >> b;
  	Rectangle re(a, b);
  	cout << "Площадь ромба: " << rh.square() << endl;
  	cout << "Площадь рямоугольника: " << re.square() << endl;
}
#endif
