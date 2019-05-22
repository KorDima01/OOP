#include "BigNumber.h"

BigNumber::BigNumber(string str1, string str2, string zn1, string zn2, string deystvie)
{
    str1_ = str1;
    str2_ = str2;
    zn1_ = zn1;
    zn2_ = zn2;
    deystvie_ = deystvie;
}
void  BigNumber::printAll(){
    cout << "\x1B[2J\x1B[H"; // console clear for *nix version
    cout << "Введено: \n";
    if(this->zn1_ == "+") cout << "    " + this->str1_ << endl;
    if(this->zn1_ == "-") cout << "   -" + this->str1_ << endl;
    cout << this->deystvie_ << endl;
    if(this->zn2_ == "+") cout << "    " + this->str2_ << endl;
    if(this->zn2_ == "-") cout << "   -" + this->str2_ << endl;
    cout << "=" << endl;
}
string  BigNumber::printstr1(){
    return str1_;
}
string BigNumber::printstr2(){
    return str2_;
}
string BigNumber::getstr1(){
    return this->str1_;
}
string BigNumber::getstr2(){
    return this->str2_;
}
string BigNumber::Bolshe(string s1, string s2)
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
string BigNumber::ifZero(string s1, string s2)
{
    if((s1 == "0") && (s2 == "0")) return "s1, s2 = 0";
    if(s1 == "0") return "s1 = 0";
    if(s2 == "0") return "s2 = 0";
    if((s1 != "0") && (s2 != "0")) return "s1, s2 <> 0";
}
BigNumber BigNumber::operator+(BigNumber b){
    BigNumber res;
    res = Addition(this->str1_, this->str2_);
    return res;
}
BigNumber BigNumber::operator-(BigNumber b){
    return Subtraction(this->str1_, this->str2_);
}
BigNumber BigNumber::operator*(BigNumber b){
    return Multiplication(this->str1_, this->str2_);
}
BigNumber BigNumber::operator/(BigNumber b){
    return Division(this->str1_, this->str2_, "div");
}
BigNumber BigNumber::operator%(BigNumber b){
    return Division(this->str1_, this->str2_, "mod");
}
