#include "Menu.h"

Menu::Menu()
{
	
}

Menu::~Menu()
{
	cout << "������ �����"<<endl;
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
		case 0: {cout << "����� �� ���������";; break; }
		default: cout << "������� ������������ �������";

		}

	} while (command);
}

void Menu::inputData1()
{
	int ID, children; string name, surname, address, gender, birthday;
	cout << "������� ID: "; cin >> ID; p1.setID(ID);
	cout << "������� ���: "; cin >> name; p1.setName(name);
	cout << "������� �������: "; cin >> surname; p1.setSurname(surname);
	cout << "������� �����: "; cin >> address; p1.setAddress(address);
	cout << "������� ���: "; cin >> gender; p1.setGender(gender);
	cout << "������� ���� ��������: "; cin >> birthday; p1.setBirthday(birthday);
	cout << "������� ���-�� �����: "; cin >> children; p1.setChildren(children);
	cout << "\n������ �����������!\n";
}

void Menu::inputData2()
{
	int ID, children; string name, surname, address, gender, birthday;
	cout << "������� ID: "; cin >> ID; p2.setID(ID);
	cout << "������� ���: "; cin >> name; p2.setName(name);
	cout << "������� �������: "; cin >> surname; p2.setSurname(surname);
	cout << "������� �����: "; cin >> address; p2.setAddress(address);
	cout << "������� ���: "; cin >> gender; p2.setGender(gender);
	cout << "������� ���� ��������: "; cin >> birthday; p2.setBirthday(birthday);
	cout << "������� ���-�� �����: "; cin >> children; p2.setChildren(children);
	cout << "\n������ �����������!\n";
}
UniversityWorker Menu::getP1()
{
	return p1;
}
UniversityWorker Menu::getP2()
{
	return p2;
}
/*void task2(UniversityWorker& p1, UniversityWorker& p2)
{
	int ID;
	cout << "������� ����� ����������: "; cin >> ID;
	searchId(ID, p1, p2);
}

void task3(UniversityWorker& w1, UniversityWorker& w2)
{
	if (childrenAmout(w1, w2)) {
		cout << "���-�� ����� ���������";
	}
	else {
		cout << "���-�� ����� ������";
	}
}
*/