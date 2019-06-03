#pragma once
#include"UniversityWorker.h"
#include<iostream>
using namespace std;
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

