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
  //i = {0 -> 4 294 967 295}
  int buffer = 0;
  return "В разработке";
}

#endif
