#ifndef DelenieDiv
#define DelenieDiv

string DDiv(string s1, string s2)
{
  string s11, s22, result = "";
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
    s11 = s1;
    s22 = s2;
    string buffer = "";
    string i = "0";
    while(1)
    {

    }
    return result;
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
