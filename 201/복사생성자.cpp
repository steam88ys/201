#include <iostream>
#include <string.h>

using namespace std;

class Person
{
private:
	string sName;
	int nAge;
public:
	Person();
	Person(string name, int age);
	void hi();
};

Person::Person()
{
	sName = "�͸�";
	nAge = 0;
}

Person::Person(string name, int age) 
	:sName(name), nAge(age) {
	/*sName = name;
	nAge = age;*/
}

void Person::hi () {
	cout << "�̸�: " << sName << endl;
	cout << "����: " << nAge << endl<<endl;
}

int main(void) {
	Person p1 = Person();
	p1.hi();

	Person *p2 = new Person("������", 18);
	p2->hi();
	delete p2;

	Person* people = new Person[5];
	people[0].hi();
	delete[] people;

	return 0;
}

