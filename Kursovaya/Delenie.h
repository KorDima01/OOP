#ifndef DelenieDiv
#define DelenieDiv

string Division(string s1, string s2, string deystvie)
{
  string s11, s22;
  string result = "0";
  string DivOtv, ModOtv = "0";
  s11 = s1;
  s22 = s2;
  string x, y = "0";
  string buffer = "";
  string i = "0";

  if (Bolshe(s1, s2) == "=")
  {
    if(deystvie == "div")
    {
      return "1";
    }
    else
    if(deystvie == "mod")
    {
      return "0";
    }
  }
  else
  if (Bolshe(s1, s2) == "<")
  {
    return "---";
  }
  else
  {
    while(Bolshe(result, s11) == "<")
    {
      x = Addition(x, "1");
      result = Multiplication(x, s22);
    }
  }
  if (Bolshe(result, s11) == ">")
  {
    x = Subtraction(x, "1");
  }
  y = Subtraction(s11, Multiplication(s22, x));
  DivOtv = x;
  ModOtv = y;

  if(deystvie == "div")
  {
    return DivOtv;
  }
  else
  {
    return ModOtv;
  }

}
#endif

/*
a>b

14 / 3 = 3 * 4 + 2
a / b = x * b + y
       |       |
      div | mod
*/

// while(0==0)
// {
//   i = Addition(i, "1");
//   cout << "1) i "<< i << endl;
//   cout << "2) s22 "<< s22 << endl;
//   // cout << "3) * "<< Multiplication(s22, i) << endl;
//   cout << "4) <> "<< Bolshe(s11, Multiplication(s22, i)) << endl;
//   if((Bolshe(s11, Multiplication(s22, i)) == "=") || (Bolshe(s11, Multiplication(s22, i)) == "<"))
//   {
//     cout << "5) Крайний "<< i << endl;
//     return i;
//   }
// }
