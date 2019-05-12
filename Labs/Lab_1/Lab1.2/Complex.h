#include <iostream>
#include <cmath>

#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex {
	double re;	// Действительная часть числа
	double im;	// Мнимая часть числа
public:
	Complex();	// Создаёт число равное 0

	Complex(double, double);	// Создает число с известными мнимой и действительной частями

	void setNumber(double, double);	// Задаёт действительную и мнимую часть

	double getRe();	// Возвращает действительную часть числа

	double getIm();	// Возвращает мнимую часть числа

	double countModule();	// Возвращает модуль комплексного числа

	Complex& operator= (const Complex&);	// Перегруженный оператор присвоения

	friend const Complex operator+ (const Complex&, const Complex&);	// Сложение

	friend const Complex operator- (const Complex&, const Complex&);	// Вычитание

	friend const Complex operator* (const Complex&, const Complex&);	// Умножение

	friend const Complex operator/ (const Complex&, const Complex&);	// Деление

	friend std::ostream& operator<< (std::ostream&, const Complex&);	// Вывод

	~Complex();	// Деструктор
};

#endif /* COMPLEX_H_ */
