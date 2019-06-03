#include "iostream"

using namespace std;

class UniversityWorker
{
	//���� ������ 
protected:
	int ID;
	string name;
	string surname;
	char address[50];
	int children;
	string gender;
	string birthday;

	//������������ � ����������� 
public:
	UniversityWorker();
	UniversityWorker(int Id, string n, string s, char a[], int ch, string g, string b);
	~UniversityWorker();

	//������ ��������� � ��������� ����� ������� ������ 
	int getID();
	void setID(int ID);
	void setName(string name);
	string getName();
	void setSurname(string surname);
	string getSurname();
	void setAddress(char address[]);
	char* getAddress();
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
