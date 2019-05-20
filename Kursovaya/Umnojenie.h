#ifndef Umnojenie
#define Umnojenie

// #include <sstream>

string Multiplication(string s1, string s2)
{
  string s11, s22, result = "";
  string vremennaya, k = "";

// шаг 1 инициализация строк
  if (s1.length() > s2.length()){
      s11 = s1;
      s22 = s2;
  }
  else{
      s11 = s2;
      s22 = s1;
  }
  while (result.length() < s11.length())
  {
      result += "0";
      vremennaya += "0";
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
for(unsigned int i = 0; i < s22.length() - 1; i++)
{
  for (int j = 0; j < (s22.at(i) - '0'); j++) {
    reverse(s11.begin(), s11.end());
    vremennaya = Addition(vremennaya, s11);
    reverse(s11.begin(), s11.end());

  }
  k += "0";
  vremennaya += k;
  reverse(result.begin(), result.end());
  result = Addition(vremennaya, result);
  reverse(result.begin(), result.end());

  vremennaya = "";
}

// Вывод ответа
// Удаление незначимого нуля в ответе
unsigned int ii = 0;
  while(0==0)
  {
      if ((result.at(ii) == '0') && (ii != result.length()-1))
      {
          result.erase(0, 1);
      }
      else
      break;
      ii++;
  }
  reverse(result.begin(), result.end());
  return result;
}

#endif
