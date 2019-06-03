#include "Menu.h"

Menu::Menu()
{
	p1 =  UniversityWorker();
	p2 = UniversityWorker();
}

Menu::~Menu()
{
	cout << "объект удалён";
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
		default: cout << "Введена неправельная команда";

		}

	} while (command);
}
