#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

extern void Firstm();
extern void Secondm();
extern void Thirdm();

union First_m
{
	void Firstm()
	{
		string yes = "���";
		string no = "ͳ";
		string reply;

		cout << "�������� ����������� ����������?(���/ͳ)"<<endl;
		cin >> reply;
		if (reply == yes) {
			cout << "������!" << endl;
		}
		else {
			if (reply == no) {
				cout << "������!" << endl;

			}
			else {
				return Firstm();
			}
		}

		
	}
};


union Second_m
{
	void Secondm()
	{
		int reply;
		int one = 1;
		int two = 2;
		int three = 3;
		int four = 4;
		int five = 5;
		cout << "������ ����� �� 1 �� 5:" << endl;
		cin >> reply;
		if (reply == one) {
			cout << "�� ������ �������" << endl;
		}
		else {
			if (reply == two) {
				cout << "�� ������ �����" << endl;
			}
			else {
				if (reply == three) {
					cout << "�� ������ �����" << endl;
				}
				else {
					if (reply == four) {
						cout << "�� ������ �������" << endl;
					}
					else {
						if (reply == five) {
							cout << "�� ������ �'�����" << endl;
						}
						else {
							cout << "����� �� ����������� � ��������� �����" << endl;
							return Secondm();
						}
					}
				}
			}
		}
	}
};

union Third_m
{
	void Thirdm()
	{
		int reply;
		int correct = 1;
		cout << "������ ����-��� �����" << endl;
		cin >> reply;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "�� ����� �� �����" << endl;
			return Thirdm();
		}
		else {
			cout << "������, �� ������� ����������!" << endl;
		}

	}
};

int main()
{
	setlocale(LC_CTYPE, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "³��� � ��������� ��!"<<endl;

	First_m fm;
	fm.Firstm();

	Second_m sm;
	sm.Secondm();

	Third_m tm;
	tm.Thirdm();

	exit(0);
	return 0;
}