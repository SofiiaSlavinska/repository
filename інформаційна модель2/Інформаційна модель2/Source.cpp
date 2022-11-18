#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Введiть П.І.Б:";
    string pib;
    getline(cin, pib);

    cout << "Введіть стать(Ч/Ж):";
    string sex;
    cin >> sex;
    
    cout << "Введіть громадянство:";
    string nationality;
    cin >> nationality;

    cout << "Введіть дату народження(ХХ.ХХ.ХХХХ):";
    string date;
    cin >> date;

    cout << "Введіть номер паспорту:";
    char password[9];
    cin >> password;

    cout << "                                 Дані\t" << endl;
    cout << "П.І.Б.:\t" << pib << endl;
    cout << "Стать:\t" << sex << endl;
    cout << "Громадянство:\t" << nationality << endl;
    cout << "Дата народження:\t" << date << endl;
    cout << "Номер паспорту:\t" << password << endl;


    return 0;
}