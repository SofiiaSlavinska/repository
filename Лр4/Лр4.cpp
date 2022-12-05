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
		string yes = "Так";
		string no = "Ні";
		string reply;

		cout << "Попереднє повідомлення висвітилось?(Так/Ні)"<<endl;
		cin >> reply;
		if (reply == yes) {
			cout << "Чудово!" << endl;
		}
		else {
			if (reply == no) {
				cout << "Брехня!" << endl;

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
		cout << "Введіть число від 1 до 5:" << endl;
		cin >> reply;
		if (reply == one) {
			cout << "Ви обрали одиницю" << endl;
		}
		else {
			if (reply == two) {
				cout << "Ви обрали двійку" << endl;
			}
			else {
				if (reply == three) {
					cout << "Ви обрали трійку" << endl;
				}
				else {
					if (reply == four) {
						cout << "Ви обрали четвірку" << endl;
					}
					else {
						if (reply == five) {
							cout << "Ви обрали п'ятірку" << endl;
						}
						else {
							cout << "Число не знаходиться в потрібному радіусі" << endl;
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
		cout << "Введіть будь-яке число" << endl;
		cin >> reply;
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << "Це навіть не число" << endl;
			return Thirdm();
		}
		else {
			cout << "Чудово, ви пройшли тестування!" << endl;
		}

	}
};

int main()
{
	setlocale(LC_CTYPE, "ukr");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Вітаю у тестуванні ПЗ!"<<endl;

	First_m fm;
	fm.Firstm();

	Second_m sm;
	sm.Secondm();

	Third_m tm;
	tm.Thirdm();

	exit(0);
	return 0;
}