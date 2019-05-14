#include "start.h"



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


    big_integer bi(str1), bi2 = 100;
    big_integer f = 1;
    for (big_integer i = 2; i <= bi2; ++i) f *= i;
    cout << f << endl;



    while (!((deystvie == "+") || (deystvie == "-") || (deystvie == "*") || (deystvie == "mod") || (deystvie == "div")))
    {
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        cout << "Какое действие сделать? (+|-|*|mod|div|pow)" << "\n";
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
        if((zn1 == "+") && (zn2 == "+"))
        {
            cout << "    " << bi.pow(100) << "\n";
        }
        else
        if((zn1 == "-") && (zn2 == "-"))
        {
            cout << "   -" <<  << "\n";
        }
        else
        if((zn1 == "+") && (zn2 == "-"))
        {
            if(str1 >= str2)
            {
                cout << "    " <<  << "\n";
            }
            else
            {
                cout << "   -" <<  << "\n";
            }
        }
        if((zn1 == "-") && (zn2 == "+"))
        {
            if(str1 <= str2)
            {
                cout << "    " <<  << "\n";
            }
            else
            {
                cout << "   -" <<  << "\n";
            }
        }
    }
    else
    if((deystvie == "-"))
    {
        if((zn1 == "+") && (zn2 == "-"))
        {
            cout << "    " <<  << "\n";
        }
        else
        if((zn1 == "-") && (zn2 == "+"))
        {
            cout << "   -" <<  << "\n";
        }
        else
        if((zn1 == "+") && (zn2 == "+"))
        {
            if(str1 >= str2)
            {
                cout << "    " <<  << "\n";
            }
            else
            {
                cout << "   -" <<  << "\n";
            }
        }
        if((zn1 == "-") && (zn2 == "-"))
        {
            if(str1 <= str2)
            {
                cout << "    " <<  << "\n";
            }
            else
            {
                cout << "   -" <<  << "\n";
            }
        }
    }
    else
    if((deystvie == "*"))
    {
        if(((zn1 == "+") && (zn2 == "+")) || ((zn1 == "-") && (zn2 == "-")))
        {
            cout << "    " <<  << "\n";
        }
        else
        if(((zn1 == "-") && (zn2 == "+")) || ((zn1 == "+") && (zn2 == "-")))
        {
            cout << "   -" <<  << "\n";
        }
    }
    else
    if((deystvie == "mod"))
    {
        if(((zn1 == "+") && (zn2 == "+")) || ((zn1 == "-") && (zn2 == "-")))
        {
            cout << "    " <<  << "\n";
        }
        else
        if(((zn1 == "-") && (zn2 == "+")) || ((zn1 == "+") && (zn2 == "-")))
        {
            cout << "   -" <<  << "\n";
        }
    }
    else
    if((deystvie == "div"))
    {
        if(((zn1 == "+") && (zn2 == "+")) || ((zn1 == "-") && (zn2 == "-")))
        {
            cout << "    " <<  << "\n";
        }
        else
        if(((zn1 == "-") && (zn2 == "+")) || ((zn1 == "+") && (zn2 == "-")))
        {
            cout << "   -" <<  << "\n";
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
    return 0;
}
