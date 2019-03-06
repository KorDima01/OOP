#include "Start.h"
#include "Programms.h"

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
//IN-CONSTRUCT            programma1_2();
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
//IN-CONSTRUCT            programma2_1();
            break;
        case 2:
//IN-CONSTRUCT            programma2_2();
            break;
        case 3:
//IN-CONSTRUCT            programma2_3();
            break;
        case 4:
//IN-CONSTRUCT            programma2_4();
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
//IN-CONSTRUCT            programma3_1();
            break;
        case 2:
//IN-CONSTRUCT            programma3_2();
            break;
        case 3:
//IN-CONSTRUCT            programma3_3();
            break;
        case 4:
//IN-CONSTRUCT            programma3_4();
            break;
        case 5:
//IN-CONSTRUCT            programma3_5();
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
//IN-CONSTRUCT            programma4_1();
            break;
        case 2:
//IN-CONSTRUCT            programma4_2();
            break;
        case 3:
//IN-CONSTRUCT            programma4_3();
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
//IN-CONSTRUCT            programma5_1();
            break;
        case 2:
//IN-CONSTRUCT            programma5_2();
            break;
        case 3:
//IN-CONSTRUCT            programma5_3();
            break;
        case 4:
//IN-CONSTRUCT            programma5_4();
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
//IN-CONSTRUCT            programma6_1();
            break;
        case 2:
//IN-CONSTRUCT            programma6_2();
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
//IN-CONSTRUCT            programma7_1();
            break;
        case 2:
//IN-CONSTRUCT            programma7_2();
            break;
        case 3:
//IN-CONSTRUCT            programma7_3();
            break;
        case 4:
//IN-CONSTRUCT            programma7_4();
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
//IN-CONSTRUCT            programma8_1();
            break;
        case 2:
//IN-CONSTRUCT            programma8_2();
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
