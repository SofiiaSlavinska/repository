#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");

    
    string rectName = "ABCD";// ����� ������������
    unsigned short int sideAB = 4;// ������� AB
    unsigned short int sideBC = 3;// ������� ��
    bool isExisting = true;// ����������� i���?
    string sumOfAngles = "360 ������i�";// ���� ���i�
    unsigned int Perimeter = sideAB*2 + sideBC*2;// ��������
    unsigned int Area = sideAB*sideBC;// �����
    unsigned int diagonal = sqrt(sideAB*sideAB+sideBC*sideBC);// �i�������
    unsigned int totalMemoryInBytes = // ���'���

        sizeof(rectName) +
        sizeof(sideAB) +
        sizeof(sideBC) +
        sizeof(isExisting) +
        sizeof(sumOfAngles) +
        sizeof(Perimeter) +
        sizeof(Area) +
        sizeof(diagonal);

    cout << "����� ������������:\t" << rectName << endl;
    cout << "������� �� � ��:\t" << sideAB << endl;
    cout << "������� �� � ��:\t" << sideBC << endl;
    cout << "����������� i���?:\t" << ((isExisting) ? "���" : "�i") << endl;
    cout << "���� ���i�:\t" << sumOfAngles << endl;
    cout << "��������:\t" << Perimeter << endl;
    cout << "�����:\t" << Area << endl;
    cout << "�i�������:\t" << diagonal << endl;
    cout << "��������� ��'�� ������������ ���'��i (� ������):\t" << totalMemoryInBytes << endl;

    getchar();

    return 0;
}
