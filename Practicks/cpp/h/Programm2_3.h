#ifndef Programm2_3
#define Programm2_3

void Programma2_3(){
  double a, b, y, t;
  	cout << "Введите a и b: ";
  	cin >> a >> b;

  	if (a <= b) {
  		y = (a - b) * (a + b) / ((a + b) * (a * a - a * b + b * b));
  	} else {
  		y = a + pow(log(b), 2);
  	}

  	if (y == b) {
  		t = (2 * y + sqrt(y * y - a)) / (2 * b - sqrt(a * a - y));
  	} else {
  		if (y < b) {
  			t = sin(y) * sin(y) + 1 / tan(a - b);
  		} else {
  			t = pow(y * sin(a), 1/3) + 1 / sqrt(y * cos(b));
  		}
  	}
    // проверка на ошибки при счете
  	if (isnan(y) || isnan(t) || isinf(y) || isinf(t)) {
  		cout << "Нельзя посчитать" << endl;
  	} else {
  		cout << "a = " << a << endl;
  		cout << "b = " << b << endl;
  		cout << "y = " << y << endl;
  		cout << "t = " << t << endl;
  	}
}

#endif
