#include <iostream>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

int diff(int a, int b) {
	return a - b;
}

int prod(int a, int b) {
	return a * b;
}

int divis(int a, int b) {
	return a / b;
}

int(*res)(int a, int b);
int main()
{
	char arr[4] = { '+', '-', '*', '/' };
	int a, b, ch;
	cout << "Enter a and b:" << endl;
	cin >> a >> b;
	cout << "Enter:\nSum - 1\ndiff - 2\n prod - 3\ndiv - 4" << endl;
	cin >> ch;
	switch (ch)
	{
	case(1):
		{
			res = sum;
			break;
		}
	case(2):
		{
			res = diff;
			break;
		}
	case(3):
		{
			res = prod;
			break;
		}
	case(4):
		{
			res = divis;
			break;
		}
	default:
		break;
	}
	cout << "a " << arr[ch-1] << " b = " << res(a, b) << endl;
	cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
	cin.get();
	cin.get();
	return 0;
}
