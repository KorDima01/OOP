#include "Start.h"

//--------------------------------------------\/-START-\/-----------------------
int main()
{
    Nachalo:
    switchNumb:
    cout << "\x1B[2J\x1B[H"; // console clear for *nix version
    int Numb = 0;
    int SubNumb = 0;

    cout << "Введите номер практической: ";
    cin >> Numb;
    cout << "Введите номер варианта задания: ";
    cin >> SubNumb;
    cout << "\n";
    switch (Numb)
    {
//-----------------------------------------\/-ZADANIE_#1.*-\/-------------------
    case 1:
        switch (SubNumb)
        {
        case 1:
            Programma1_1();
            break;
        case 2:
            Programma1_2();
            break;
        default:
            cout << "Нет такого задания" << "\n";
            goto switchNumb;
            break;
        }
        break;
//-----------------------------------------\/-ZADANIE_#2.*-\/-------------------
    case 2:
        switch (SubNumb)
        {
        case 1:
            Programma2_1();
            break;
        case 2:
            Programma2_2();
            break;
        case 3:
            Programma2_3();
            break;
        case 4:
            Programma2_4();
            break;
        default:
            cout << "Нет такого задания" << "\n";
            goto switchNumb;
            break;
        }
        break;
//-----------------------------------------\/-ZADANIE_#3.*-\/-------------------
    case 3:
        switch (SubNumb)
        {
        case 1:
            Programma3_1();
            break;
        case 2:
            Programma3_2();
            break;
        case 3:
            Programma3_3();
            break;
        case 4:
            Programma3_4();
            break;
        case 5:
             Programma3_5();
            break;
        default:
            cout << "Нет такого задания" << "\n";
            goto switchNumb;
            break;
        }
        break;
//-----------------------------------------\/-ZADANIE_#4.*-\/-------------------
    case 4:
        switch (SubNumb)
        {
        case 1:
            Programma4_1();
            break;
        case 2:
            Programma4_2();
            break;
        case 3:
            Programma4_3();
            break;
        default:
            cout << "Нет такого задания" << "\n";
            goto switchNumb;
            break;
        }
        break;
//-----------------------------------------\/-ZADANIE_#5.*-\/-------------------
    case 5:
        switch (SubNumb)
        {
        case 1:
            Programma5_1();
            break;
        case 2:
            Programma5_2();
            break;
        case 3:
            Programma5_3();
            break;
        case 4:
            Programma5_4();
            break;
        default:
            cout << "Нет такого задания" << "\n";
            goto switchNumb;
            break;
        }
        break;
//-----------------------------------------\/-ZADANIE_#6.*-\/-------------------
    case 6:
        switch (SubNumb)
        {
        case 1:
            Programma6_1();
            break;
        case 2:
            Programma6_2();
            break;
        default:
            cout << "Нет такого задания" << "\n";
            goto switchNumb;
            break;
        }
        break;
//-----------------------------------------\/-ZADANIE_#7.*-\/-------------------
    case 7:
        switch (SubNumb)
        {
        case 1:
            Programma7_1();
            break;
        case 2:
            Programma7_2();
            break;
        case 3:
            Programma7_3();
            break;
        case 4:
            Programma7_4();
            break;
        default:
            cout << "Нет такого задания" << "\n";
            goto switchNumb;
            break;
        }
        break;
//-----------------------------------------\/-ZADANIE_#8.*-\/-------------------
    case 8:
        switch (SubNumb)
        {
        case 1:
            Programma8_1();
            break;
        case 2:
            Programma8_2();
            break;
        default:
            cout << "Нет такого задания" << "\n";
            goto switchNumb;
            break;
        }
        break;
    default:
        cout << "Нет такого задания" << "\n";
        goto switchNumb;
        break;
    }
//---------------------------------------------\/-END-\/------------------------
cout <<"\n" << "Задание выполнено." << "\n";
cout << "Закончить выполнение программы или запустить её заново?";
cout << "(1 = запустить заново ИЛИ |остальное| = ЗАКОНЧИТЬ): ";
string EndZnach = "";
cin >> EndZnach;
if (EndZnach == "1"){
    cout << "\x1B[2J\x1B[H"; // console clear for *nix version
    goto Nachalo;
}else{
    cout << "\x1B[2J\x1B[H"; // console clear for *nix version
    cout << "Програма завершена. \n \n Программу выполнил: \n Студент: Корнеев Дмитрий \n Группы: ИНБО-04-18"<< "\n";
}
cout << "\n \n \nВведите любое значение, для закрытия окна." << "\n";
cin >> EndZnach;
	return 0;
}
