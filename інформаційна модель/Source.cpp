#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");

    
    string rectName = "ABCD";// Назва прямокутника
    unsigned short int sideAB = 4;// Сторона AB
    unsigned short int sideBC = 3;// Сторона ВС
    bool isExisting = true;// Прямокутник iснує?
    string sumOfAngles = "360 градусiв";// Сума кутiв
    unsigned int Perimeter = sideAB*2 + sideBC*2;// Периметр
    unsigned int Area = sideAB*sideBC;// Площа
    unsigned int diagonal = sqrt(sideAB*sideAB+sideBC*sideBC);// Дiагональ
    unsigned int totalMemoryInBytes = // Пам'ять

        sizeof(rectName) +
        sizeof(sideAB) +
        sizeof(sideBC) +
        sizeof(isExisting) +
        sizeof(sumOfAngles) +
        sizeof(Perimeter) +
        sizeof(Area) +
        sizeof(diagonal);

    cout << "Назва прямокутника:\t" << rectName << endl;
    cout << "Сторона АВ у см:\t" << sideAB << endl;
    cout << "Сторона ВС у см:\t" << sideBC << endl;
    cout << "Прямокутник iснує?:\t" << ((isExisting) ? "Так" : "Нi") << endl;
    cout << "Сума кутiв:\t" << sumOfAngles << endl;
    cout << "Периметр:\t" << Perimeter << endl;
    cout << "Площа:\t" << Area << endl;
    cout << "Дiагональ:\t" << diagonal << endl;
    cout << "Загальний об'єм використанної пам'ятi (в байтах):\t" << totalMemoryInBytes << endl;

    getchar();

    return 0;
}
