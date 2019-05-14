#ifndef Vichitanie
#define Vichitanie

string Subtraction(string s1, string s2, string zn1, string zn2)
{
    string s11, s22, result = "";

// шаг 1 инициализация строк
    s11 = s1;
    s22 = s2;

    while (result.length() <= s11.length())
    {
        result += "0";
    }

    while (s22.length() < s11.length())
    {
        s22 = "0" + s22;
    }
// шаг 2 переворот строк
    reverse(s11.begin(), s11.end());
    reverse(s22.begin(), s22.end());
// шаг 3 работа со строками
//i = {0 -> 4 294 967 295}
int buffer = 0;
string zn = "";
    for(unsigned int i = 0; i < result.length()-1;i++)
    {
      if((s11.at(i) - s22.at(i) + 10 - buffer - 2 * '0' ) >= 10)
        {
          result.at(i) += (s11.at(i) - s22.at(i) + 10 - buffer - 2 * '0') % 10;
          buffer = 1;
        }
        else
        {
          result.at(i) += (s11.at(i) - s22.at(i) - buffer - 2 * '0');
          buffer = 1;
        }
    }
    if (buffer == 1)
    {
      zn = '-';
    }

//Вывод ответа
    reverse(result.begin(), result.end());
// Удаление незначимого нуля в ответе
unsigned int i = 0;
while(result.at(i))
{
  if (result.at(i) == '0')
  {
    result.erase(0, 1);
  }
  else
  break;
}
if(zn == "1") {return "-" + result;}
}

#endif
