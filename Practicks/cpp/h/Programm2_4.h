#ifndef Programm2_4
#define Programm2_4

void Programma2_4(){
  double a, x, y, t;
	cout << "Enter a and x: ";
	cin >> a >> x;

	if (a <= x) {
		y = a + log(x + a);
	} else {
		y = sqrt(sin(a * x));
	}

	if (a > y) {
		t = y / (a - x);
	} else {
		if (a == y) {
			t = y / (a - x) + (a + x) / (y * y);
		} else {
			t = tan(a * x) + cos(2 * a * y);
		}
	}
  // проверка на ошибки при счете
	if (isnan(y) || isnan(t) || isinf(y) || isinf(t)) {
		cout << "Нельзя посчитать" << endl;
	} else {
		cout << "a = " << a << endl;
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
		cout << "t = " << t << endl;
	}
}

#endif
