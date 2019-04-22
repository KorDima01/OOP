#ifndef Programm4_1
#define Programm4_1
double *createArray(int);	// Создаёт массив

void fillArray(double *, int);	// Заполняет массив случайными числами

void printArray(double *, int);	// Выводит массив на экран

void deleteArray(double *, int);	// Удаляет массив
void Programma4_1(){
  srand(time(NULL));
	int size;
	cout << "Введите размер массива, чтобы выйти из программы введите число (< 1):  ";
	cin >> size;

	while (size > 0) {
		double *arr = createArray(size);
		fillArray(arr, size);
		printArray(arr, size);
		deleteArray(arr, size);

		cout << "Введите размер массива, чтобы выйти из программы введите число (< 1):  ";
		cin >> size;
    cout << endl;
	}
}
double *createArray(int size) {
	return new double[size];
}

void fillArray(double *arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}

void printArray(double *arr, int size) {
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void deleteArray(double *arr, int size) {
	delete [] arr;
}
#endif
