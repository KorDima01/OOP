#include "start.h"

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

int main()
{
    setlocale(LC_ALL,"RUS");
    bool nachalo=true;
    while(nachalo!=false)
{
    string str1= ".";
    string str2= ".";
    string zn1= ".";
    string zn2 = ".";
    string deystvie = ".";

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
//------------------------------------------------------НАЧАЛО-ПРОВЕРКИ НА НОЛЬ-
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
//------------------------------------------------------КОНЕЦ--ПРОВЕРКИ НА НОЛЬ-


    while (!((deystvie == "+") || (deystvie == "-") || (deystvie == "*") || (deystvie == "mod") || (deystvie == "div")))
    {
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        cout << "Какое действие сделать? (+|-|*|mod|div)" << "\n";
        cin >> deystvie;
    }

    cout << "\x1B[2J\x1B[H"; // console clear for *nix version
    cout << "Введено: \n";
    if(zn1 == "+") cout << "    " + str1 << endl;
    if(zn1 == "-") cout << "   -" + str1 << endl;
    cout << deystvie << endl;
    if(zn2 == "+") cout << "    " + str2 << endl;
    if(zn2 == "-") cout << "   -" + str2 << endl;

    cout << "=" << endl;

    if((deystvie == "+"))
    {
        if(ifZero(str1, str2) == "str1 = 0")
        {
            cout << "    " << zn2 << str2 << "\n";
            break;
        }
        else
        if(ifZero(str1, str2) == "str2 = 0")
        {
            cout << "    " << zn1 << str1 << "\n";
            break;
        }
        else
        if(ifZero(str1, str2) == "str1, str2 = 0")
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
            if(Bolshe(str1, str2) == ">")
            {
                cout << "    " << Subtraction(str1, str2, zn1, zn2) << "\n";
            }
            else
            {
                cout << "   -" << Subtraction(str1, str2, zn1, zn2) << "\n";
            }
        }
        if((zn1 == "-") && (zn2 == "+"))
        {
            if(Bolshe(str1, str2) == "<")
            {
                cout << "    " << Subtraction(str1, str2, zn1, zn2) << "\n";
            }
            else
            {
                cout << "   -" << Subtraction(str1, str2, zn1, zn2) << "\n";
            }
        }
    }
    else
    if((deystvie == "-"))
    {
        if(ifZero(str1, str2) == "str1 = 0")
        {
            cout << "    " << zn2 << str2 << "\n";
            break;
        }
        else
        if(ifZero(str1, str2) == "str2 = 0")
        {
            cout << "    " << zn1 << str1 << "\n";
            break;
        }
        else
        if(ifZero(str1, str2) == "str1, str2 = 0")
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
            if((Bolshe(str1, str2) == "=") || (Bolshe(str1, str2) == ">"))
            {
                cout << "    " << Subtraction(str1, str2, zn1, zn2) << "\n";
            }
            else
            {
                cout << "   -" << Subtraction(str1, str2, zn1, zn2) << "\n";
            }
        }
        if((zn1 == "-") && (zn2 == "-"))
        {
            if((Bolshe(str1, str2) == "=") || (Bolshe(str1, str2) == "<"))
            {
                cout << "    " << Subtraction(str1, str2, zn1, zn2) << "\n";
            }
            else
            {
                cout << "   -" << Subtraction(str1, str2, zn1, zn2) << "\n";
            }
        }
    }
    else
    if((deystvie == "*"))
    {
        if(ifZero(str1, str2) == "str1, str2 = 0")
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
        if(ifZero(str1, str2) == "str1 = 0")
        {
            cout << "    " << 0 << "\n";
            break;
        }
        else
        if(ifZero(str1, str2) == "str2 = 0")
        {
            cout << "    " << "Делить на 0 нельзя" << "\n";
            break;
        }
        else
        if(ifZero(str1, str2) == "str1, str2 = 0")
        {
            cout << "    " << "Делить на 0 нельзя" << "\n";
            break;
        }
        else
        if(((zn1 == "+") && (zn2 == "+")) || ((zn1 == "-") && (zn2 == "-")))
        {
            cout << "    " << DMod(str1, str2) << "\n";
        }
        else
        if(((zn1 == "-") && (zn2 == "+")) || ((zn1 == "+") && (zn2 == "-")))
        {
            cout << "   -" << DMod(str1, str2) << "\n";
        }
    }
    else
    if((deystvie == "div"))
    {
        if(ifZero(str1, str2) == "str1 = 0")
        {
            cout << "    " << 0 << "\n";
            break;
        }
        else
        if(ifZero(str1, str2) == "str2 = 0")
        {
            cout << "    " << "Делить на 0 нельзя" << "\n";
            break;
        }
        else
        if(ifZero(str1, str2) == "str1, str2 = 0")
        {
            cout << "    " << "Делить на 0 нельзя" << "\n";
            break;
        }
        else
        if(((zn1 == "+") && (zn2 == "+")) || ((zn1 == "-") && (zn2 == "-")))
        {
            cout << "    " << DDiv(str1, str2) << "\n";
        }
        else
        if(((zn1 == "-") && (zn2 == "+")) || ((zn1 == "+") && (zn2 == "-")))
        {
            cout << "   -" << DDiv(str1, str2) << "\n";
        }
    }






//------------------------------------------------------------КОНЕЦ-ПРОГРАММЫ---
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
    cout << "\n \n \n Введите любое значение, для закрытия окна." << "\n";
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    return 0;
}
