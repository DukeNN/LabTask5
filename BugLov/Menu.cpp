#include "Menu.h"

Menu::Menu()
{
	
}

Menu::~Menu()
{
	cout << "объект удалён"<<endl;
}

void Menu::showMenu()
{
	do
	{
		cout << "1. Установить данные для первого сотрудника: " << endl;
		cout << "1. Установить данные для вотрого сотрудника: " << endl;
		cout << "3. Поиск по номеру:" << endl;
		cout << "4. Одинаковое кол-во детей?:" << endl;
		cout << "0. Выход" << endl;
		cout << "Выберите действие:";
		cin >> command;
		switch (command)
		{
		case 1: {

			//inputData(p1);
			cout << "Заглушка 1";
			break;
		}
		case 2: {
			//inputData(p2);
			cout << "Заглушка 2";
			break; }
		case 3: {cout<<"Заглушка 3"; break; }
		case 4: {cout << "Заглушка 3";; break; }
		case 0: {cout << "Выход из программы";; break; }
		default: cout << "Введена неправельная команда";

		}

	} while (command);
}

void Menu::inputData1()
{
	int ID, children; string name, surname, address, gender, birthday;
	cout << "Введите ID: "; cin >> ID; p1.setID(ID);
	cout << "Введите Имя: "; cin >> name; p1.setName(name);
	cout << "Введите Фамилию: "; cin >> surname; p1.setSurname(surname);
	cout << "Введите Адрес: "; cin >> address; p1.setAddress(address);
	cout << "Введите Пол: "; cin >> gender; p1.setGender(gender);
	cout << "Введите Дату рождения: "; cin >> birthday; p1.setBirthday(birthday);
	cout << "Введите Кол-во детей: "; cin >> children; p1.setChildren(children);
	cout << "\nДанные установлены!\n";
}

void Menu::inputData2()
{
	int ID, children; string name, surname, address, gender, birthday;
	cout << "Введите ID: "; cin >> ID; p2.setID(ID);
	cout << "Введите Имя: "; cin >> name; p2.setName(name);
	cout << "Введите Фамилию: "; cin >> surname; p2.setSurname(surname);
	cout << "Введите Адрес: "; cin >> address; p2.setAddress(address);
	cout << "Введите Пол: "; cin >> gender; p2.setGender(gender);
	cout << "Введите Дату рождения: "; cin >> birthday; p2.setBirthday(birthday);
	cout << "Введите Кол-во детей: "; cin >> children; p2.setChildren(children);
	cout << "\nДанные установлены!\n";
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
	cout << "Введите номер сотрудника: "; cin >> ID;
	searchId(ID, p1, p2);
}

void task3(UniversityWorker& w1, UniversityWorker& w2)
{
	if (childrenAmout(w1, w2)) {
		cout << "Кол-во детей одинаково";
	}
	else {
		cout << "Кол-во детей разное";
	}
}
*/