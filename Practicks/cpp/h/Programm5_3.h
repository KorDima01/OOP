#ifndef Programm5_3
#define Programm5_3
void insertSort(int *a, int size)//сортировка вставками для целых чисел
{
	int key, buff;
	for (int i = 0; i < size - 1; i++)
	{
		key = i + 1;
		buff = a[key];
		for (int j = i + 1; j > 0; j--)
		{
			if (buff < a[j - 1])
			{
				a[j] = a[j - 1];
				key = j - 1;
			}
		}
		a[key] = buff;
	}
}
void  insertSort(double *a, int size)//сортировка вставками для дробных чисел
{
	int key;
	double buff;
	for (int i = 0; i < size - 1; i++)
	{
		key = i + 1;
		buff = a[key];
		for (int j = i + 1; j > 0; j--)
		{
			if (buff < a[j - 1])
			{
				a[j] = a[j - 1];
				key = j - 1;
			}
		}
		a[key] = buff;
	}
}
void show3(int *a, int size)//функция вывода массива для целых чисел
{
	cout << "Int array:" << endl;
	for (int i = 0; i < size; i++) cout << a[i] << " ";
	cout << endl;
}
void show3(double *a, int size)//функция вывода массива для дробных чисел
{
	cout << "Double array:" << endl;
	for (int i = 0; i < size; i++) cout << a[i] << " ";
	cout << endl;
}
void Programma5_3(){
  int a[10];
  	double b[10];
  	srand(time(0));
  	for (int i = 0; i < 10; i++)//заполнение массивов
  	{
  		a[i]= 10 + rand() % 40;
  		b[i]= (double)(rand() % 1000 - 50) / 100;
  	}
  	show3(a, 10);
  	show3(b, 10);
  	insertSort(a,10);
  	insertSort(b, 10);
  	show3(a, 10);
  	show3(b, 10);
}

#endif
