#include "start.h"

bool IsOnlyNumberContains(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if ((input.at(i) < '0') || (input.at(i) > '9'))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    bool nachalo=true;
    while(nachalo!=false)
{
    string str1,str2 = "";
    cout << "Введите два числа:";
    cout << "\n 1)";
    cin >> str1;
    cout << "\n 2)";
    cin >> str2;

    while (!IsOnlyNumberContains(str1))
    {
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        cout << "Введите только цифры:" << "\n";
        cout << "1)";
        cin >> str1;
    }
    while (!IsOnlyNumberContains(str2))
    {
        cout << "\x1B[2J\x1B[H"; // console clear for *nix version
        cout << "Введите только цифры:" << "\n";
        cout << "2)";
        cin >> str2;
    }

    cout << endl << SUMMA(str1, str2) << "\n";


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
