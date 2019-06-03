#include "UniversityWorker.h"
UniversityWorker::UniversityWorker()
{
	ID = 0;
	name = "";
	surname = "";
	address = "";
	birthday = "";
	children = 0;
	gender = "";

}

UniversityWorker::UniversityWorker(int Id, string n, string s, string a, int ch, string g, string b)
{
	this->ID = Id;
	this->name = n;
	this->surname = s;
	this->address = a;
	this->children = ch;
	this->gender = g;
	this->birthday = b;
}

// Реализация методов класса
UniversityWorker::~UniversityWorker()
{
	//cout << "Объект удалён UniversetyWorker"<<endl;
}

int UniversityWorker::getID()
{
	return ID;
}

void UniversityWorker::setID(int ID)
{
	this->ID = ID;
}

void UniversityWorker::setName(string name)
{
	this->name = name;
}

string UniversityWorker::getName()
{
	return this->name;
}

void UniversityWorker::setSurname(string surname)
{
	this->surname = surname;
}

string UniversityWorker::getSurname()
{
	return surname;
}

void UniversityWorker::setAddress(string address)
{
	this->address = address;
}

string UniversityWorker::getAddress()
{
	return address;
}

void UniversityWorker::setChildren(int children)
{
	this->children = children;
}

int UniversityWorker::getChildren()
{
	return children;
}

void UniversityWorker::setGender(string gender)
{
	this->gender = gender;
}

string UniversityWorker::getGender()
{
	return gender;
}

void UniversityWorker::setBirthday(string birthday)
{
	this->birthday = birthday;
}

string UniversityWorker::getBirthday()
{
	return birthday;
}


void searchId(int ID, UniversityWorker& w1, UniversityWorker& w2)
{
	if (w1.getID() == ID) {
		cout << w1.getName();
		cout << w1.getSurname();
		cout << w1.getGender();
		cout << w1.getBirthday();
	}
	else if (w2.getID() == ID) {
		cout << w2.getName();
		cout << w2.getSurname();
		cout << w2.getGender();
		cout << w2.getBirthday();
	}
	else cout << "Работника с таким номером не сужествует ";
	
}

bool childrenAmout(UniversityWorker& W1, UniversityWorker& W2)
{
	if (W1.getChildren() == W2.getChildren()) return true;
	else return false;
}
