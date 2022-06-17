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
	cout << "이름: " << name << ", 학번: " << hakbun ;
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
	cout << "이름: " << name << ", 학번: " << hakbun << ", 학교: " <<  university << endl;
}

int main (void)
{
	Student st1("홍길동", 2018, "한국대학교");
	st1.PrintShow();

	return 0;
}