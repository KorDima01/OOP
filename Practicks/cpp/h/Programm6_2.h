#ifndef Programm6_2
#define Programm6_2
class Expression// абстрактный класс "выражение"
{
	protected:
		double a;
	public:
		Expression(double b = 0) : a(b) {};//конструктор
		virtual void print() = 0;//виртуальная функция для печати выражения
		virtual double result(double b) = 0;// виртуальная функция результата
		virtual double derivative() = 0;// виртуальная функция производной
		virtual void copy(double b) = 0;// виртуальная функция для копирования выражения
		virtual ~Expression() {};
};
class Cons : Expression// класс "константа"
{
	public:
		Cons(double b = 0) : Expression(b) {};
		void print()
		{
			cout << "Const: ";
		}
		double result(double b)
		{
			return a;
		}
		double derivative()
		{
			return 0;
		}
		void copy(double b)
		{

		}
};
class Var : Expression// класс "переменная"
{
	public:
		Var(double b = 0) : Expression(b) {};
		void print()
		{
			cout << "Variable: ";
		}
		double result(double b)
		{
			return b;
		}
		double derivative()
		{
			return 1;
		}
		void copy(double b)
		{
			a = b;
		}
};
class Sum : Expression// класс "сумма"
{
	public:
		Sum(double b = 0) : Expression(b) {};
		void print()
		{
			cout << "Sum: ";
		}
		double result(double b)
		{
			return a+b;
		}
		double derivative()
		{
			return 1;
		}
		void copy(double b)
		{
			a = a + b;
		}
};
class Dif : Expression// класс "разность"
{
	public:
		Dif(double b = 0) : Expression(b) {};
		void print()
		{
			cout << "Difference: ";
		}
		double result(double b)
		{
			return a-b;
		}
		double derivative()
		{
			return 1;
		}
		void copy(double b)
		{
			a = a - b;
		}
};
class Mult : Expression// класс "произведение"
{
	public:
		Mult(double b = 0) : Expression(b) {};
		void print()
		{
			cout << "Multiply: ";
		}
		double result(double b)
		{
			return a * b;
		}
		double derivative()
		{
			return 1;
		}
		void copy(double b)
		{
			a = a * b;
		}
};
class Pri : Expression// класс "частное"
{
	public:
		Pri(double b = 0) : Expression(b) {};
		void print()
		{
			cout << "Quotient: ";
		}
		double result(double b)
		{
			if (b!=0)
				return a / b;
			else return 0;
		}
		double derivative()
		{
			return 1;
		}
		void copy(double b)
		{
			if (b != 0)
				a = a / b;
			else a = 0;
		}
};
class Sin : Expression// класс "синус"
{
	public:
		Sin(double b = 0) : Expression(b) {};
		void print()
		{
			cout << "Sin: ";
		}
		double result(double b)
		{
			return sin(a);
		}
		double derivative()
		{
			return cos(a);
		}
		void copy(double b)
		{
			a = b;
		}
};
class Cos : Expression// класс "косинус"
{
	public:
		Cos(double b = 0) : Expression(b) {};
		void print()
		{
			cout << "Cos: ";
		}
		double result(double b)
		{
			return cos(b);
		}
		double derivative()
		{
			return -sin(a);
		}
		void copy(double b)
		{
			a = b;
		}
};
class Exp : Expression// класс "экспонента"
{
	public:
		Exp(double b = 0) : Expression(b) {};
		void print()
		{
			cout << "Exp: ";
		}
		double result(double b)
		{
			return exp(b);
		}
		double derivative()
		{
			return  exp(a);
		}
		void copy(double b)
		{
			a = b;
		}
};
class Ln : Expression// класс "логарифм"
{
	public:
		Ln(double b = 0) : Expression(b) {};
		void print()
		{
			cout << "Log: ";
		}
		double result(double b)
		{
			return log(b);
		}
		double derivative()
		{
			return  1/a;
		}
		void copy(double b)
		{
			a = b;
		}
};
void Programma6_2(){
  double a, b;
  	cout << "Введите a, b" << endl;
  	cin >> a >> b;
  	Cons cnst = a;
    cout << "Резульат----------l----------Производная" << endl;
  	cnst.print();
  	cout <<  cnst.result(b) << " ---------l--------- " << cnst.derivative() << endl;
  	Var v = a;
  	v.print();
  	cout <<  v.result(b) << " ---------l--------- " << v.derivative() << endl;
  	Sum s = a;
  	s.print();
  	cout <<  s.result(b) << " ---------l--------- " << s.derivative() << endl;
  	Dif d = a;
  	d.print();
  	cout <<  d.result(b) << " ---------l--------- " << d.derivative() << endl;
  	Mult m = a;
  	m.print();
  	cout <<  m.result(b) << " ---------l--------- " << m.derivative() << endl;
  	Pri p = a;
  	p.print();
  	cout <<  p.result(b) << " ---------l--------- " << p.derivative() << endl;
  	Sin sn = a;
  	sn.print();
  	cout <<  sn.result(b) << " ---------l--------- " << sn.derivative() << endl;
  	Cos cs = a;
  	cs.print();
  	cout <<  cs.result(b) << " ---------l--------- " << cs.derivative() << endl;
  	Exp e = a;
  	e.print();
  	cout <<  e.result(b) << " ---------l--------- " << e.derivative() << endl;
  	Ln l = a;
  	l.print();
  	cout <<  l.result(b) << " ---------l--------- " << l.derivative() << endl;
}

#endif
