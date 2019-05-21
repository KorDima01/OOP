#ifndef BolsheMenshe
#define BolsheMenshe


string Bolshe(string s1, string s2)
{
  if (s1.length() > s2.length())
  {
    return ">";
  }
  else
  if (s2.length() > s1.length())
  {
    return "<";
  }
  else
  {
    // reverse(s1.begin(), s1.end());
    // reverse(s2.begin(), s2.end());
    for (int i = 0; i <= s1.length() - 1; i++)
    {
      if (s1.at(i) > s2.at(i))
      {
        return ">";
      }
      else
      if (s1.at(i) < s2.at(i))
      {
        return "<";
      }
    }
    return "=";
  }
}

string ifZero(string s1, string s2)
{
  if((s1 == "0") && (s2 == "0")) return "s1, s2 = 0";
  if(s1 == "0") return "s1 = 0";
  if(s2 == "0") return "s2 = 0";
  if((s1 != "0") && (s2 != "0")) return "s1, s2 <> 0";
}



#endif
