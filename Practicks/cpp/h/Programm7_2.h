#ifndef Programm7_2
#define Programm7_2
class Figure {	// Базовый абстрактный класс "Фигура"
protected:
	int vertices;	// Количество вершин
public:
	Figure(int vertices) { this->vertices = vertices; }

	virtual double getSquare() = 0;	// Виртуальный метод, считающий площадь
};

class Quadrilateral : public Figure{	// Абстрактный класс "Четырёхугольник"
protected:
	vector<double> x;	// х составляющая координат точек
	vector<double> y;	// у составляющая координат точек
public:
	Quadrilateral(vector<double>&, vector<double>&);

	virtual double getSquare() = 0;
};

class Rhombus : public Quadrilateral {	// Класс "Ромб"
public:
	Rhombus(vector<double> &x, vector<double> &y) :	Quadrilateral(x, y) {}

	double getSquare();	// Определённый метод для подсчёта площади фигуры

	~Rhombus() {
	}
};

class Rectangle : public Quadrilateral {	// Класс "Прямоугольник"
public:
	Rectangle(vector<double> &x, vector<double> &y) : Quadrilateral(x, y) {}

	double getSquare();	// Определённый метод для подсчёта площади фигуры

	~Rectangle() {}
};
void Programma7_2(){
  vector<double> x1(4);
  	vector<double> y1(4);

  	vector<double> x2(4);
  	vector<double> y2(4);

  	for (int i = 0; i < 4; i++) {
  		cout << "Enter rhombus vertex " << i + 1 << ": ";
  		cin >> x1[i] >> y1[i];
  	}
  	for (int i = 0; i < 4; i++) {
  		cout << "Enter rectangle vertex " << i + 1 << ": ";
  		cin >> x2[i] >> y2[i];
  	}

  	Rhombus r(x1, y1);
  	Rectangle rect(x2, y2);
  	cout << "Rhombus square: " << r.getSquare() << endl;
  	cout << "Rectangle square: " << rect.getSquare() << endl;
}

Quadrilateral::Quadrilateral(vector<double> &x, vector<double> &y) : Figure(4) {
	this->x = x;
	this->y = y;
}

double Rhombus::getSquare() {
	return sqrt((x[0] - x[2]) * (x[0] - x[2]) + (y[0] - y[2]) * (y[0] - y[2])) *
			sqrt((x[1] - x[3]) * (x[1] - x[3]) + (y[1] - y[3]) * (y[1] - y[3])) / 2;
}

double Rectangle::getSquare() {
	return sqrt((x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1])) *
				sqrt((x[2] - x[3]) * (x[2] - x[3]) + (y[2] - y[3]) * (y[2] - y[3]));
}
#endif
