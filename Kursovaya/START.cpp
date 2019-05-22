#include "start.h"
#include "BigNumber.cpp"

bool IsNumberContains(string input)
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

int main()
{
    setlocale(LC_ALL,"RUS");
    bool nachalo=true;
    while(nachalo!=false)
{
    string str1 = ".";
    string str2 = ".";
    string zn1 = ".";
    string zn2 = ".";
    string deystvie = ".";

//------------------------------------------------------------------------------
while (!((zn1 == "+") || (zn1 == "-")))
{
    cout << "\x1B[2J\x1B[H"; // console clear for *nix version
    cout << "Введите знак первого числа:" << "\n1)";
    cin >> zn1;
}

while (IsNumberContains(str1))
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

while (IsNumberContains(str2))
{
    cout << "\x1B[2J\x1B[H"; // console clear for *nix version
    cout << "Введите второе число:" << "\n2)";
    cin >> str2;
}
unsigned int ii = 0;
while(0==0)
{
    if ((str1.at(ii) == '0') && (ii != str1.length()-1))
    {
        str1.erase(0, 1);
    }
    else
    break;
    ii++;
}
ii = 0;
while(0==0)
{
    if ((str2.at(ii) == '0') && (ii != str2.length()-1))
    {
        str2.erase(0, 1);
    }
    else
    break;
    ii++;
}

if (((str1 == "") || (str1 == "0")) && ((zn1 == "-") || (zn1 == "+")))
{
    str1 = "0";
    zn1 = "+";
}
if (((str2 == "") || (str2 == "0")) && ((zn2 == "-") || (zn2 == "+")))
{
    str2 = "0";
    zn2 = "+";
}

//------------------------------------------------------НАЧАЛО-ПРОВЕРКИ НА НОЛЬ-
//------------------------------------------------------КОНЕЦ--ПРОВЕРКИ НА НОЛЬ-


    while (!((deystvie == "+") || (deystvie == "-") || (deystvie == "*") || (deystvie == "mod") || (deystvie == "div")))
    {
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        cout << "Какое действие сделать? (+|-|*|div|mod)" << "\n";
        cin >> deystvie;
    }


    BigNumber Number(str1, str2, zn1, zn2, deystvie);
    Number.printAll();

    srand(time(0));
    unsigned int start_time = clock();
//------------------------------------------------------НАЧАЛО-РАСЧЕТОВ---------
    if((deystvie == "+"))
    {
        if(Number.ifZero(str1, str2) == "str1 = 0")
        {
            cout << "    " << zn2 << str2 << "\n";
            break;
        }
        else
        if(Number.ifZero(str1, str2) == "str2 = 0")
        {
            cout << "    " << zn1 << str1 << "\n";
            break;
        }
        else
        if(Number.ifZero(str1, str2) == "str1, str2 = 0")
        {
            cout << "    " << 0 << "\n";
            break;
        }
        else
        if((zn1 == "+") && (zn2 == "+"))
        {
            cout << "    " << Addition(str1, str2) << "\n";
        }
        else
        if((zn1 == "-") && (zn2 == "-"))
        {
            cout << "   -" << Addition(str1, str2) << "\n";
        }
        else
        if((zn1 == "+") && (zn2 == "-"))
        {
            if(Number.Bolshe(str1, str2) == ">")
            {
                cout << "    " << Subtraction(str1, str2) << "\n";
            }
            else
            {
                cout << "   -" << Subtraction(str1, str2) << "\n";
            }
        }
        if((zn1 == "-") && (zn2 == "+"))
        {
            if(Number.Bolshe(str1, str2) == "<")
            {
                cout << "    " << Subtraction(str1, str2) << "\n";
            }
            else
            {
                cout << "   -" << Subtraction(str1, str2) << "\n";
            }
        }
    }
    else
    if((deystvie == "-"))
    {
        if(Number.ifZero(str1, str2) == "str1 = 0")
        {
            cout << "    " << zn2 << str2 << "\n";
            break;
        }
        else
        if(Number.ifZero(str1, str2) == "str2 = 0")
        {
            cout << "    " << zn1 << str1 << "\n";
            break;
        }
        else
        if(Number.ifZero(str1, str2) == "str1, str2 = 0")
        {
            cout << "    " << 0 << "\n";
            break;
        }
        else
        if((zn1 == "+") && (zn2 == "-"))
        {
            cout << "    " << Addition(str1, str2) << "\n";
        }
        else
        if((zn1 == "-") && (zn2 == "+"))
        {
            cout << "   -" << Addition(str1, str2) << "\n";
        }
        else
        if((zn1 == "+") && (zn2 == "+"))
        {
            if((Number.Bolshe(str1, str2) == "=") || (Number.Bolshe(str1, str2) == ">"))
            {
                cout << "    " << Subtraction(str1, str2) << "\n";
            }
            else
            {
                cout << "   -" << Subtraction(str1, str2) << "\n";
            }
        }
        if((zn1 == "-") && (zn2 == "-"))
        {
            if((Number.Bolshe(str1, str2) == "=") || (Number.Bolshe(str1, str2) == "<"))
            {
                cout << "    " << Subtraction(str1, str2) << "\n";
            }
            else
            {
                cout << "   -" << Subtraction(str1, str2) << "\n";
            }
        }
    }
    else
    if((deystvie == "*"))
    {
        if(Number.ifZero(str1, str2) == "str1, str2 = 0")
        {
            cout << "    " << 0 << "\n";
        }
        else
        if(((zn1 == "+") && (zn2 == "+")) || ((zn1 == "-") && (zn2 == "-")))
        {
            cout << "    " << Multiplication(str1, str2) << "\n";
        }
        else
        if(((zn1 == "-") && (zn2 == "+")) || ((zn1 == "+") && (zn2 == "-")))
        {
            cout << "   -" << Multiplication(str1, str2) << "\n";
        }
    }
    else
    if((deystvie == "mod"))
    {
        if(Number.ifZero(str1, str2) == "str1 = 0")
        {
            cout << "    " << 0 << "\n";
            break;
        }
        else
        if(Number.ifZero(str1, str2) == "str2 = 0")
        {
            cout << "    " << "Делить на 0 нельзя" << "\n";
            break;
        }
        else
        if(Number.ifZero(str1, str2) == "str1, str2 = 0")
        {
            cout << "    " << "Делить на 0 нельзя" << "\n";
            break;
        }
        else
        if(((zn1 == "+") && (zn2 == "+")) || ((zn1 == "-") && (zn2 == "-")))
        {
            cout << "    " << Division(str1, str2, deystvie) << "\n";
        }
        else
        if(((zn1 == "-") && (zn2 == "+")) || ((zn1 == "+") && (zn2 == "-")))
        {
            cout << "   -" << Division(str1, str2, deystvie) << "\n";
        }
    }
    else
    if((deystvie == "div"))
    {
        if(Number.ifZero(str1, str2) == "str1 = 0")
        {
            cout << "    " << 0 << "\n";
            break;
        }
        else
        if(Number.ifZero(str1, str2) == "str2 = 0")
        {
            cout << "    " << "Делить на 0 нельзя" << "\n";
            break;
        }
        else
        if(Number.ifZero(str1, str2) == "str1, str2 = 0")
        {
            cout << "    " << "Делить на 0 нельзя" << "\n";
            break;
        }
        else
        if(((zn1 == "+") && (zn2 == "+")) || ((zn1 == "-") && (zn2 == "-")))
        {
            cout << "    " << Division(str1, str2, deystvie) << "\n";
        }
        else
        if(((zn1 == "-") && (zn2 == "+")) || ((zn1 == "+") && (zn2 == "-")))
        {
            cout << "   -" << Division(str1, str2, deystvie) << "\n";
        }
    }
//------------------------------------------------------НАЧАЛО-РАСЧЕТОВ---------
    unsigned int end_time = clock();
    unsigned int search_time = end_time - start_time;

    cout << "Время затраченное на вычисления = " << search_time / 1000000.0 << " сек" << endl;

    cout <<"\n" << "Задание выполнено." << "\n";
    cout << "Закончить выполнение программы или запустить её заново?";
    cout << "(1 = запустить заново ИЛИ |остальное| = ЗАКОНЧИТЬ): ";
    string EndZnach = "";
    cin >> EndZnach;

    if (EndZnach == "1"){
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        nachalo=true;
    }else{
        nachalo=false;
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        cout << "Програма завершена. \n \n Программу выполнил: \n Студент: Корнеев Дмитрий \n Группы: ИНБО-04-18"<< "\n";
    }
}
//------------------------------------------------------------КОНЕЦ-ПРОГРАММЫ---
    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
    return 0;
}
