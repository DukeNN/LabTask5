#include "Menu.h"

Menu::Menu()
{
	p1 =  UniversityWorker();
	p2 = UniversityWorker();
}

Menu::~Menu()
{
	cout << "������ �����";
}

void Menu::showMenu()
{
	do
	{
		cout << "1. ���������� ������ ��� ������� ����������: " << endl;
		cout << "1. ���������� ������ ��� ������� ����������: " << endl;
		cout << "3. ����� �� ������:" << endl;
		cout << "4. ���������� ���-�� �����?:" << endl;
		cout << "0. �����" << endl;
		cout << "�������� ��������:";
		cin >> command;
		switch (command)
		{
		case 1: {

			//inputData(p1);
			cout << "�������� 1";
			break;
		}
		case 2: {
			//inputData(p2);
			cout << "�������� 2";
			break; }
		case 3: {cout<<"�������� 3"; break; }
		case 4: {cout << "�������� 3";; break; }
		default: cout << "������� ������������ �������";

		}

	} while (command);
}
