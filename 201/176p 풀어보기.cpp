#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Person
{
public:
	string name;
	int hakbun;
	Person(string name, int hakbun);
	void PrintShow();
};

Person::Person(string name, int hakbun)
	:name(name), hakbun(hakbun)
{

}

void Person::PrintShow()
{
	cout << "�̸�: " << name << ", �й�: " << hakbun ;
}

class Student : public Person
{
public:
	string university;
	Student(string name, int hakbun, string university)
		:Person(name, hakbun), university(university)
	{

	}
	void PrintShow();
};

void Student::PrintShow()
{
	cout << "�̸�: " << name << ", �й�: " << hakbun << ", �б�: " <<  university << endl;
}

int main (void)
{
	Student st1("ȫ�浿", 2018, "�ѱ����б�");
	st1.PrintShow();

	return 0;
}