#ifndef Programm5_1
#define Programm5_1
void bubleSort(int *a, int size)//сортировка пузырьком для целых чисел
{
	int buff;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (a[j] > a[j + 1]) {
				buff = a[j]; //
				a[j] = a[j + 1]; // меняем местами
				a[j + 1] = buff; // значения элементов
			}
		}
	}
}
void bubleSort(double *a, int size)//сортировка пузырьком для дробных чисел
{
	double buff;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (a[j] > a[j + 1]) {
				buff = a[j];
				a[j] = a[j + 1]; // меняем местами
				a[j + 1] = buff; // значения элементов
			}
		}
	}
}
void show1(int *a, int size)//функция вывода массива для целых чисел
{
	cout << "Int array:" << endl;
	for (int i = 0; i < size; i++) cout << a[i] << " ";
	cout << endl;
}
void show1(double *a, int size)//функция вывода массива для дробных чисел
{
	cout << "Double array:" << endl;
	for (int i = 0; i < size; i++) cout << a[i] << " ";
	cout << endl;
}
void Programma5_1(){
  int a[10];
  	double b[10];
  	srand(time(0));
  	for (int i = 0; i < 10; i++)//заполнение массивов
  	{
  		a[i]= 10 + rand() % 40;
  		b[i]= (double)(rand() % 1000 - 50) / 100;
  	}
  	show1(a, 10);
  	show1(b, 10);
  	bubleSort(a,10);
  	bubleSort(b, 10);
  	show1(a, 10);
  	show1(b, 10);
}

#endif
