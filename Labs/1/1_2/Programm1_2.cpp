#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;


int sum (int a,int b){
    return a + b;
}

int multiply(int a,int b){
    return a*b;
}

int divis(int a,int b){
    return a/b;
}

int diff(int a,int b){
    return a-b;
}

void reverseArray(vector<int> &arr){
    int t;
    for (int i = 0;i < 5;i++){
        t = arr[i];
        arr[i] = arr[9-i];
        arr[9-i] = t;
    }
}

void neubArray(vector<int> &arr){
    int t;
    for (int i = 0;i < 10;i++)
        for (int j = i;j < 10;j++)
            if (arr[j] < arr[i]){
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
}

void ubArray(vector<int> &arr){
    int t;
    for (int i = 0;i < 10;i++)
        for (int j = i;j < 10;j++)
            if (arr[j] > arr[i]){
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
}

void (*arrayFunc(vector<int> &arr))(vector<int> &arr){
    int sum = 0;
    for (int i = 0;i < 10;i++)
        sum += arr[i];
    if (sum == arr[0])
        return reverseArray;
    else if (sum > arr[0])
        return neubArray;
    else
        return ubArray;
}


int (*func)(int a,int b);
int main(int argc, const char * argv[]) {
    int a,b,action;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter 1 - sum of a and b \n 2 - different of a and b \n 3 - multiply of a and b \n 4 - division of a and b" << endl;
    cin >> action;
    switch (action) {
        case 1:
            func = sum;
            break;
        case 2:
            func = diff;
            break;
        case 3:
            func = multiply;
            break;
        case 4:
            func = divis;
            break;
    }
    cout << "Result is " << func(a,b) << endl;

    //Вариант 2
    vector<int> arr;
    srand(time(0));
    cout << "Created array" << endl;
    for (int i = 0; i < 10;i++){
        arr.push_back(rand()%20);
        cout << arr[i] << ' ';
    }
    cout << endl;

    arrayFunc(arr)(arr);
    cout << "Array after function" << endl;
    for (int i = 0;i < 10;i++)
        cout << arr[i] << ' ';

    cout << endl;
    
	cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
	cin.get();
	return 0;
}
