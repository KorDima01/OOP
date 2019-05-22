#ifndef Umnojenie
#define Umnojenie

// #include <sstream>

string Multiplication(string s1, string s2)
{
  string s11, s22, result = "";
  string vremennaya, k = "";

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
  s11 = s1;
  s22 = s2;
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
for(unsigned int i = 0; i <= s22.length() - 1; i++)
{
  for (int j = 0; j < (s22.at(i) - '0'); j++) {
    reverse(s11.begin(), s11.end());
    vremennaya = Addition(vremennaya, s11);
    reverse(s11.begin(), s11.end());

  }
  vremennaya += k;
  result = Addition(vremennaya, result);
  vremennaya = "";
  k += "0";
}

  return result;
}

#endif
