#include "iostream"

using namespace std;

class UniversityWorker
{
	//���� ������ 
protected:
	int ID;
	string name;
	string surname;
	string address;
	int children;
	string gender;
	string birthday;

	//������������ � ����������� 
public:
	UniversityWorker();
	UniversityWorker(int Id, string n, string s, string a, int ch, string g, string b);
	~UniversityWorker();

	//������ ��������� � ��������� ����� ������� ������ 
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


//�-��� ������ �� ID
void searchId(int ID, UniversityWorker& w1, UniversityWorker& w2);

//�-��� ������������ ���-�� �����
bool childrenAmout(UniversityWorker& W1, UniversityWorker& W2);
//������� ��� ���������� ������� **********************************
