#ifndef Programm5_2
#define Programm5_2
void choicesSort(int *a, int size)//сортировка выбором для целых чисел
{
	int buff;
	for (int i = 0; i < size; i++)
	{
		buff = a[0];
		for (int j = i + 1; j <size; j++)
		{
			if (a[i] > a[j])
			{
				buff = a[i];
				a[i] = a[j];
				a[j] = buff;
			}
		}
	}
}
void choicesSort(double *a, int size)//сортировка выбором для дробных чисел
{
	double buff;
	for (int i = 0; i < size; i++)
	{
		buff = a[0];
		for (int j = i + 1; j <size; j++)
		{
			if (a[i] > a[j])
			{
				buff = a[i];
				a[i] = a[j];
				a[j] = buff;
			}
		}
	}
}
void show2(int *a, int size)//функция вывода массива для целых чисел
{
	cout << "Int array:" << endl;
	for (int i = 0; i < size; i++) cout << a[i] << " ";
	cout << endl;
}
void show2(double *a, int size)//функция вывода массива для дробных чисел
{
	cout << "Double array:" << endl;
	for (int i = 0; i < size; i++) cout << a[i] << " ";
	cout << endl;
}
void Programma5_2(){
  int a[10];
  	double b[10];
  	srand(time(0));
  	for (int i = 0; i < 10; i++)//заполнение массивов
  	{
  		a[i]= 10 + rand() % 40;
  		b[i]= (double)(rand() % 1000 - 50) / 100;
  	}
  	show2(a, 10);
  	show2(b, 10);
  	choicesSort(a,10);
  	choicesSort(b, 10);
  	show2(a, 10);
  	show2(b, 10);
}

#endif
