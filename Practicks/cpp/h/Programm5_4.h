#ifndef Programm5_4
#define Programm5_4
int add(int a,int b)//сложение целых чисел
{
	return a + b;
}
double add(double a, double b)//сложение дробных чисел
{
	return a + b;
}
int sub(int a, int b)//вычитание целых чисел
{
	return (a - b);
}
double sub(double a, double b)//вычитание дробных чисел
{
	return a - b;
}
int mul(int a, int b)//умножение целых чисел
{
	return a * b;
}
double mul(double a, double b)//умножение дробных чисел
{
	return a * b;
}
int divi(int a, int b)//деление целых чисел
{
	if (b != 0)
		return a / b;
	else
	{
		cout << "Деление на 0" << endl;
		return -1;
	}

}
double divi(double a, double b)//деление дробных чисел
{
	if (b != 0)
		return a / b;
	else
	{
		cout << "Деление на 0" << endl;
		return -1;
	}
}
void Programma5_4(){
  int type;
  	double a, b;
  	int sw = 1;
    cout << "Введите a,b" << endl;
    cin >> a >> b;
  	cout << "1 - '+', 2 - '-', 3 - '*', 4 - '/',  другое - 'exit'" << endl;//выбор
  	cin >> sw;
  	while ((sw > 0)&&(sw < 5))
  	{
  		switch (sw)
      {
        case 1://сложение
        {
          cout << "INT: " << add((int)a, (int)b) << endl << "DOUBLE: " << add(a, b) << endl;
          break;
        }
        case 2://вычитание
  		  {
  			  cout << "INT: " << sub((int)a, (int)b) << endl << "DOUBLE: " << sub(a, b) << endl;
  		    break;
  	    }
  	  	case 3://умножение
  	  	{
  		   	cout << "INT: " << mul((int)a, (int)b) << endl << "DOUBLE: " << mul(a, b) << endl;
          break;
       	}
  	  	case 4://деление
  	   	{
  	   		cout << "INT: " << divi((int)a, (int)b) << endl << "DOUBLE: " << divi(a, b) << endl;
          break;
       	}
  	  	default:
  		   	cout << "Выход" << endl;
          break;
  	   	}
      cout << "1 - '+', 2 - '-', 3 - '*', 4 - '/',  другое - 'exit'" << endl;//выбор
    	cin >> sw;
  		}
      cout << "Выход" << endl;
}

#endif
