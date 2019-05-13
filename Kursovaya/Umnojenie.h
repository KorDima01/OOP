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
  int buffer = 0;
  string vremennaya = "0";

  while(vremennaya != s22){
    vremennaya = Addition(vremennaya,"1");
    result = Addition(result,s11);
  }
  //Вывод ответа
  reverse(result.begin(), result.end());
  // Удаление незначимого нуля в ответе
  if (result.at(0) == '0')
  {
    result.erase(0, 1);
    return result;
  }
  else return result;
}

#endif
