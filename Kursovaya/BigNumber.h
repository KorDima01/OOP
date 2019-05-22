class BigNumber{
    string str1_,str2_;
public:
  BigNumber(string str1 = "", string str2 = "");
  string printstr1();
  string printstr2();
  string getstr1();
  BigNumber operator+(BigNumber b);
  BigNumber operator-(BigNumber b);
  BigNumber operator*(BigNumber b);
  BigNumber operator/(BigNumber b);
  BigNumber operator%(BigNumber b);
};
