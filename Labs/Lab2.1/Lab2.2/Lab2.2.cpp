#include <iostream>
#include <ctime>
using namespace std;

void invert(int *arr, int size);	// Инвертирует массив

void sortMinToMax(int *arr, int size);	// Сортирует массив в порядке неубывания

void sortMaxToMin(int *arr, int size);	// Сортирует массив в порядке невозрастания

//Возвращает функцию, которую надо выполнить
void (*f(int *arr, int size))(int *arr, int size);

int main() {
	srand(time(0));

	int n = 10;
	int *arr = new int[n];
	cout << "Input array: ";
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}

	f(arr, n)(arr, n);

	cout << endl << "Output array: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}

void invert(int *arr, int size) {
	for (int i = 0; i < size/2; i++) {
		int c = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = c;
	}
}

void sortMinToMax(int *arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[i]) {
				int c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
}

void sortMaxToMin(int *arr, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[j] > arr[i]) {
				int c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
}

void (*f(int *arr, int size))(int *arr, int size) {
	int sum = 0;
	for (int i = 1; i < size; i++) {
		sum += arr[i];
	}

	if (sum == arr[0]) {
		return invert;
	} else {
		if (sum < arr[0]) {
			return sortMaxToMin;
		} else {
			return sortMinToMax;
		}
	}
}
