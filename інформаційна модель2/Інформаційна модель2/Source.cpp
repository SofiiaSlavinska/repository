#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "����i�� �.�.�:";
    string pib;
    getline(cin, pib);

    cout << "������ �����(�/�):";
    string sex;
    cin >> sex;
    
    cout << "������ ������������:";
    string nationality;
    cin >> nationality;

    cout << "������ ���� ����������(��.��.����):";
    string date;
    cin >> date;

    cout << "������ ����� ��������:";
    char password[9];
    cin >> password;

    cout << "                                 ���\t" << endl;
    cout << "�.�.�.:\t" << pib << endl;
    cout << "�����:\t" << sex << endl;
    cout << "������������:\t" << nationality << endl;
    cout << "���� ����������:\t" << date << endl;
    cout << "����� ��������:\t" << password << endl;


    return 0;
}