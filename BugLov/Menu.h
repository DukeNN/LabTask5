#pragma once
#include"UniversityWorker.h"
class Menu
{
private:
	UniversityWorker p1;
	UniversityWorker p2;
	int command;

public:
	Menu();
	~Menu();
	void showMenu();
	void inputData(UniversityWorker& p);
};

