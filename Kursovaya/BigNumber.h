class BigNumber{
    string str1_, str2_, zn1_, zn2_, deystvie_;
public:
  BigNumber(string str1 = ".", string str2 = ".", string zn1 = ".", string zn2 = ".", string deystvie = ".");
  void printAll();
  string printstr1();
  string printstr2();
  string getstr1();
  string getstr2();
  string Bolshe(string s1, string s2)
  string ifZero(string s1, string s2)
  BigNumber operator+(BigNumber big);
  BigNumber operator-(BigNumber big);
  BigNumber operator*(BigNumber big);
  BigNumber operator/(BigNumber big);
  BigNumber operator%(BigNumber big);
};
