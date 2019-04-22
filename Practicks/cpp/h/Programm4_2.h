#ifndef Programm4_2
#define Programm4_2
void swap(int &a, int &b)//функция для перестановки местами значений переменных
{
	int buffer = 0;
	buffer = a;
	a = b;
	b = buffer;
  buffer = 0;
}
void Programma4_2(){
  double *a = new double[12];//объявление указателя на массив и выделение памяти под массив
  	cout << "Введиет 12 чисел" << endl;
  	for (int i = 0; i < 12; i++) cin >> a[i];
  	for (int i = 0; i < 12; i+=2)
  	{
  		swap(a[i], a[i+1]);//перестановка элементов
  	}
  	cout << "Новый массив: " << endl;
  	for (int i = 0; i < 12; i++) cout << a[i] << " ";//вывод измененного массива
  	cout << endl;
  	delete[] a;//освобождение памяти
}

#endif
