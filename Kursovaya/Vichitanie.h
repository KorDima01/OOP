#ifndef Vichitanie
#define Vichitanie

string Subtraction(string s1, string s2, string zn1, string zn2)
{
    string s11, s22, result = "";
    cin.get();
    cout << "шаг вычисления" << endl;

// шаг 1 инициализация строк
    if (Bolshe(s1, s2) == ">")
    {
      s11 = s1;
      s22 = s2;

    }
    else
    if (Bolshe(s1, s2) == "<")
    {
      s11 = s2;
      s22 = s1;
    }
    else
    {
      return "0";
    }

    while (result.length() <= s11.length())
    {
        result += "0";
    }

    while (s22.length() < s11.length())
    {
        s22 = "0" + s22;
    }
    cin.get();
    cout << "шаг вычисления 2" << endl;
// шаг 2 переворот строк
    reverse(s11.begin(), s11.end());
    reverse(s22.begin(), s22.end());
// шаг 3 работа со строками
//i = {0 -> 4 294 967 295}
cin.get();
cout << "шаг вычисления 3" << endl;
int buffer = 0;
string zn = "";
    for(unsigned int i = 0; i < s11.length()-1;i++)
    {
      if((s11.at(i) - buffer) < s22.at(i))
      {
        result.at(i) += (s11.at(i)- '0' - s22.at(i)- '0' + 10);
        result.at(i + 1) = -1;
        buffer = 1;
      }
      else
      {
        result.at(i) += (s11.at(i)- '0' - s22.at(i)- '0');
        buffer = 0;
      }
      cout << result.at(i) - '0' << endl;
      cout << result.at(i) << endl;
    }

    cin.get();
    cout << "шаг вычисления 4" << endl;
//Вывод ответа
    reverse(result.begin(), result.end());
// Удаление незначимого нуля в ответе
// unsigned int ii = 0;
//   while(0==0)
//   {
//       if ((result.at(ii) == '0') && (ii != result.length()-1))
//       {
//           result.erase(0, 1);
//       }
//       else
//       break;
//       ii++;
//   }

}

#endif
