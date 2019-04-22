#ifndef Programm6_1
#define Programm6_1
class Property//класс собственность
{
	protected:
		double worth;//стоимость
	public:
		Property(double cost): worth(cost) {};
		virtual ~Property() {};
		virtual double tax() = 0;//виртуальная функция налогов
};
class Appartment : public Property// класс квартира
{
	public:
		Appartment(double cost) : Property(cost) {};
		double tax()
		{
			return worth/1000;
		}
};
class Car : public Property// класс машина
{
		public:
			Car(double cost) : Property(cost) {};
			double tax()
			{
				return worth / 200;
			}
};
class CountryHouse : public Property// класс дача
{
	public:
		CountryHouse(double cost) : Property(cost) {};
		double tax()
		{
			return worth / 500;
		}

};

void Programma6_1(){
  Property *properties[7];//массив указателей на Property
  	double cost;
  	for (int i = 0; i < 7; i++)
  	{
  		cout << "Введите стоимость" << endl;
  		cin >> cost;
  		if (i < 3)// первые 2 - класс "квартира"
  			properties[i] = new Appartment(cost);
  		else if (i == 3 || i == 4)// следующие 2 - класс машина
  			properties[i] = new Car(cost);
  		else//последние 2 - класс "дача"
  			properties[i] = new CountryHouse(cost);
  	}
  	cout << "Taxes:" << endl;
  	for (int i = 0; i < 7; i++) cout << (properties[i]->tax()) << endl;//вывод налогов
  	for (int i = 0; i < 7; i++) delete properties[i];//удаление массива
}

#endif
