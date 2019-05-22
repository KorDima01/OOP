#ifndef DelenieDiv
#define DelenieDiv

string Division(string s1, string s2, string deystvie)
{
  string s11, s22, result = "";
  s11 = s1;
  s22 = s2;
  string x, y = "0";
  string buffer = "";
  string i = "0";

  if (Bolshe(s1, s2) == "=")
  {
    return "1";
  }
  else
  if (Bolshe(s1, s2) == "<")
  {
    return "0";
  }
  else
  {
    cout << "Bolshe(s11, result) " << Bolshe(s11, result) << endl;
    while(Bolshe(s11, result) == ">")
    {
      cout << "Bolshe(s11, result) " << Bolshe(s11, result) << endl;
      cout << "x " << x << endl;
      result = Multiplication(x, s22);
      x = Addition(x, "1");
    }
    while(Bolshe(s11, result) == ">")
    {
      cout << "Bolshe(s11, result) " << Bolshe(s11, result) << endl;
      cout << "y " << y << endl;
      result = Addition(y, "1");
      y = Addition(y, "1");
    }
    if(deystvie == "div")
    {
      return x;
    }
    else
    {
      return y;
    }
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
