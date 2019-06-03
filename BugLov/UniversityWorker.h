#include "iostream"

using namespace std;

class UniversityWorker
{
	//поля класса 
protected:
	int ID;
	string name;
	string surname;
	string address;
	int children;
	string gender;
	string birthday;

	//конструкторы и деструкторы 
public:
	UniversityWorker();
	UniversityWorker(int Id, string n, string s, string a, int ch, string g, string b);
	~UniversityWorker();

	//методы устоновки и получения полей объекта класса 
	int getID();
	void setID(int ID);
	void setName(string name);
	string getName();
	void setSurname(string surname);
	string getSurname();
	void setAddress(string address);
	string getAddress();
	void setChildren(int children);
	int getChildren();
	void setGender(string gender);
	string getGender();
	void setBirthday(string birthday);
	string getBirthday();


};


//ф-ция поиска по ID
void searchId(int ID, UniversityWorker& w1, UniversityWorker& w2);

//ф-ция сравнивающий кол-во детей
bool childrenAmout(UniversityWorker& W1, UniversityWorker& W2);
//Функции для реализации заданий **********************************
