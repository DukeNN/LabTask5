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
	void inputData1();
	void inputData2();
	UniversityWorker getP1();
	UniversityWorker getP2();


	


	

};


//ф-ция для реализации задания 2
void task2(UniversityWorker& w1, UniversityWorker& w2);

//ф-ция для реализации задания 3
void task3(UniversityWorker& w1, UniversityWorker& w2);
