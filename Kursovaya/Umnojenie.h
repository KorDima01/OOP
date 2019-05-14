#ifndef Umnojenie
#define Umnojenie

string Multiplication(string s1, string s2)
{
  string s11, s22, result = "";

// шаг 1 инициализация строк
  if (s1.length() > s2.length()){
      s11 = s1;
      s22 = s2;
  }
  else{
      s11 = s2;
      s22 = s1;
  }
  while (result.length() <= (s11.length()*2))
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
unsigned int pos = 0;

  for(unsigned int i = 0; i < s22.length()-1; i++)
  {
    for(unsigned int j = 0; j < s11.length()-1; j++)
    {
      if((buffer + ((s11.at(j) - '0') * (s22.at(i) - '0'))) <= 9)
      {
        result.at(pos) = buffer + ((s11.at(j) - '0') * (s22.at(i) - '0'));
        buffer = 0;
      }
      else
      {
        result.at(pos) = (buffer + ((s11.at(j) - '0') * (s22.at(i) - '0'))) % 10;
        buffer = ( buffer + ((s11.at(j) - '0') * (s22.at(i) - '0'))) / 10 ;
      }
      pos++;
    }
     // cout << pos << ") " << result.at(j) << endl;
  }
  if (buffer != 0)
  {
    result.at(result.length() - 1) = buffer;
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
return result;
}

#endif
