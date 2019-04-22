#ifndef Programm4_3
#define Programm4_3
void fill(int **a, int i, int j)//функция заполнения массива
{
	srand(time(0));
	for(int l=0;l<i;l++)
		for (int c = 0; c < j; c++)
		{
			a[l][c] = 10+rand()%40;
		}
}
void show(int **a, int i, int j)//функция вывода массива
{
	for (int l = 0; l < i; l++)
	{
		for (int c = 0; c < j; c++)
		{
			cout << a[l][c] << " ";
		}
		cout << endl;
	}

}
void Programma4_3(){
  int i, j;
  	cout << "Введите кол-во строк: ";//ввод строк
  	cin >> i;
  	cout << endl << "Input the number of columns: ";//ввод столбцов
  	cin >> j;
    cout << endl;
  	int **a = new int*[i];//создание динамического двумерного массива
  	for (int c = 0; c < i; c++)
  	{
  		a[c] = new int[j];
  	}
  	fill(a,i,j);
  	show(a, i, j);
}

#endif
