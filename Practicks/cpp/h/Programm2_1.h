#ifndef Programm2_1
#define Programm2_1

void Programma2_1(){
  double a, b, m, n;
	cout << "Введите a и b: ";
	cin >> a >> b;

	if (a >= b) {
		n = pow(a - b, 1/3);
	} else {
		n = a * a + (a - b) / (sin(a * b));
	}

	if (n < b) {
		m = (n + a) / (-b) + sqrt(sin(a) * sin(a) - cos(n));
	} else {
		if (n == b) {
			m = b * b + tan(n * a);
		} else {
			m = b * b * b + n * a * a;
		}
	}
  // проверка на ошибки при счете
	if (isnan(m) || isnan(n) || isinf(m) || isinf(n)) {
		cout << "Нельзя посчитать" << endl;
	} else {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "m = " << m << endl;
		cout << "n = " << n << endl;
	}
}

#endif
