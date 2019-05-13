#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

void reverseArray(vector<int> &arr) {
	int t;
	for (int i = 0; i < 5; i++) {
		t = arr[i];
		arr[i] = arr[9 - i];
		arr[9 - i] = t;
	}
}

void neubArray(vector<int> &arr) {
	int t;
	for (int i = 0; i < 10; i++)
		for (int j = i; j < 10; j++)
			if (arr[j] < arr[i]) {
				t = arr[j];
				arr[j] = arr[i];
				arr[i] = t;
			}
}

void ubArray(vector<int> &arr) {
	int t;
	for (int i = 0; i < 10; i++)
		for (int j = i; j < 10; j++)
			if (arr[j] > arr[i]) {
				t = arr[j];
				arr[j] = arr[i];
				arr[i] = t;
			}
}

void(*arrayFunc(vector<int> &arr))(vector<int> &arr) {
	int sum = 0;
	for (int i = 0; i < 10; i++)
		sum += arr[i];
	if (sum == arr[0])
		return reverseArray;
	else if (sum > arr[0])
		return neubArray;
	else
		return ubArray;
}

int main()
{
	vector<int> arr;
	srand(time(NULL));
	cout << "Created array" << endl;
	for (int i = 0; i < 10; i++) {
		arr.push_back(rand() % 20);
		cout << arr[i] << ' ';
	}
	cout << endl;

	arrayFunc(arr)(arr);
	cout << "Array after function" << endl;
	for (int i = 0; i < 10; i++)
		cout << arr[i] << ' ';

	cout << endl;

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
	return 0;
}
