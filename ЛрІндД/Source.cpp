#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int y = 5;
    cout << "Введіть х:";
    int x;
    cin >> x;
    if (x * y < 45) {
        cout << "Умова задовольняється" << endl;
    }
    if (x * y >= 45) {
        cout << "Умова не задовільняється" << endl;
    }
}