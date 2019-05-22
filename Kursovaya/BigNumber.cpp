#include "BigNumber.h"
bool IsNotNumberContains(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if ((input.at(i) < '0') || (input.at(i) > '9'))
        {
            return true;
        }
    }
    return false;
}
BigNumber::BigNumber(string str1, string str2)
{
    while (!((zn1 == "+") || (zn1 == "-")))
    {
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        cout << "Введите знак первого числа:" << "\n1)";
        cin >> zn1;
    }

    while (IsNotNumberContains(str1))
    {
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        cout << "Введите первое число:" << "\n1)";
        cin >> str1;
    }

    while (!((zn2 == "+") || (zn2 == "-")))
    {
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        cout << "Введите знак второго числа:" << "\n2)";
        cin >> zn2;
    }

    while (IsNotNumberContains(str2))
    {
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        cout << "Введите второе число:" << "\n2)";
        cin >> str2;
    }
    str1_ = str1;
    str2_ = str2;
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
BigNumber BigNumber::operator+(BigNumber b){
    return Addition(this->str1_, this->str2_);
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
