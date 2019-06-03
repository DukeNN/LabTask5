#include<iostream>
#include"Windows.h"
#include"Menu.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	UniversityWorker W1 = UniversityWorker(2281337, "Анна", "Виталевна", "Страмынка 76", 3, "женщина", "11 января 1971");
	UniversityWorker W2;
	UniversityWorker W3;
	W2.setAddress("Тверская 12");
	W2.setName("Антон");
	W2.setSurname("Сергеев");
	W2.setChildren(0);
	W2.setBirthday("12 Августа 1996");
	W2.setID(1488777);
	W2.setGender("Мужской");

	W3.setAddress("Тверская 28");
	W3.setName("Ирина");
	W3.setSurname("Макарова");
	W3.setChildren(1);
	W3.setBirthday("12 Сентября 1994");
	W3.setID(5555963);
	W3.setGender("Женский");

	//Menu menu=Menu();

	//task3(W1, W2);
	
	//menu.showMenu();
	searchId(2281337,W1,W3);
	getchar();
}