#ifndef Programm2_2
#define Programm2_2

void Programma2_2(){
  double a, b, z, t;
  	cout << "Введите a и b: ";
  	cin >> a >> b;

  	if (a < b) {
  		z = sqrt(abs(a * a - b * b));
  	} else {
  		z = 1 - 2 * cos(a) * sin(b);
  	}

  	if (z < b) {
  		t = cbrt(z + a * a * b);
  	} else {
  		if (z == b) {
  			t = 1 - log10(z) + cos(a * a *b);
  		} else {
  			t = 1 / cos(z * a);
  		}
  	}

  	if (isnan(t) || isnan(z) || isinf(z) || isinf(t)) {
  		cout << "Нельзя посчитать" << endl;
  	} else {
  		cout << "a = " << a << endl;
  		cout << "b = " << b << endl;
  		cout << "t = " << t << endl;
  		cout << "z = " << z << endl;
  	}
}

#endif
