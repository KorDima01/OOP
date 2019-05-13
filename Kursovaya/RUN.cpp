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
        cout << "Введите знак первого числа:" << "\n 1)";
        cin >> zn1;
    }

    while (IsNotNumberContains(str1))
    {
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        cout << "Введите первое число:" << "\n";
        cout << "1)";
        cin >> str1;
    }

    while (!((zn2 == "+") || (zn2 == "-")))
    {
        cout << "Введите знак второго числа:" << "\n 2)";
        cin >> zn2;
    }

    while (IsNotNumberContains(str2))
    {
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        cout << "Введите второе число:" << "\n";
        cout << "2)";
        cin >> str2;
    }

    while (!((deystvie == "+") || (deystvie == "-") || (deystvie == "*") || (deystvie == "mod") || (deystvie == "div")))
    {
        cout << "Какое действие сделать? (+|-|*|mod|div)" << "\n";
        cin >> deystvie;
    }

    if((deystvie == "+"))
    {
        if((zn1 == "+") && (zn2 == "+")){
            cout << endl << Addition(str1, str2, zn1, zn2) << "\n";
        }
        else
        if((zn1 == "-") && (zn2 == "-"))
        {
            cout << endl << Addition(str1, str2, zn1, zn2) << "\n";
        }
        else
        {
            cout << endl << Subtraction(str1, str2, zn1, zn2) << "\n";
        }

    }
    if((deystvie == "-"))
    {
        cout << endl << Subtraction(str1, str2, zn1, zn2) << "\n";
    }

    if((deystvie == "*"))
    {
        cout << endl << Multiplication(str1, str2, zn1, zn2) << "\n";
    }
    if((deystvie == "mod"))
    {
        cout << endl << DMod(str1, str2, zn1, zn2) << "\n";
    }
    if((deystvie == "div"))
    {
        cout << endl << DDiv(str1, str2, zn1, zn2) << "\n";
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
