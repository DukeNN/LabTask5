#include<iostream>
#include"Windows.h"
#include"UniversityWorker.h"
using namespace std;

int main()
{
	UniversityWorker W1 = UniversityWorker(2281337, "����", "���������", "��������� 76", 3, "�������", "11 ������ 1971");
	UniversityWorker W2;
	UniversityWorker W3;
	W2.setAddress("�������� 12");
	W2.setName("�����");
	W2.setSurname("�������");
	W2.setChildren(0);
	W2.setBirthday("12 ������� 1996");
	W2.setID(1488777);
	W2.setGender("�������");

	W3.setAddress("�������� 28");
	W3.setName("�����");
	W3.setSurname("��������");
	W3.setChildren(1);
	W3.setBirthday("12 �������� 1994");
	W3.setID(5555963);
	W3.setGender("�������");


	setlocale(LC_ALL, "RUS"); //��������� �������� ����� � ������� 
	cout << W1.getName();
	getchar();
}