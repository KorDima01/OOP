#include "start.h"
// ------------------------------------------------------НАЧАЛО-СУММЫ-----------

string sum (string s1, string s2)
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
    for(unsigned int i = 0; i < result.length()-1;i++)
    {
        if(buffer + s11.at(i) + s11.at(i) - 2 * '0' <= 9)
        {
            if (buffer = 1)
            {
                result.at(i) += s11.at(i) + s22.at(i) - 2*'0';
            }
            else
            {
                result.at(i) += s11.at(i) + s22.at(i) - '0';
            }
            buffer = 0;
        }
        else
        {
            if (buffer = 1)
            {
                result.at(i) += s11.at(i) + s22.at(i) - 10 - 2*'0';
                result.at(i+1) = '1';
            }
            else
            {
                result.at(i) += s11.at(i) + s22.at(i) - 10 - '0';
                result.at(i+1) = '1';
            }
            buffer = 1;
        }
    }


// Удаление незначимого нуля
    reverse(result.begin(), result.end());
    if (result.at(0) == '0') result.erase(0, 1);
//Вывод ответа
    return s11 + " + " + s22 + " = " + result;
}
// ------------------------------------------------------КОНЕЦ--СУММЫ-----------
int main()
{
    string str1,str2;

    cin >> str1;
    cin >> str2;

    while(isdigit(str1)){
        cin >> str1;
    }

    cout << endl << sum(str1, str2) << "\n";

    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
    return 0;
}
