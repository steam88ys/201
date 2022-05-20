#include <iostream>
#include <string.h>

using namespace std;

class Person {					// Person Ŭ����
private:
	string sName;
	int nAge;
public:
	Person();
	Person(string name, int age);
	void hi();
};		

class Student : public Person {	// Student Ŭ���� (Person ���)
	int nHakbun;
public:
	Student();
	Student(string name, int age, int hakbun);
	void study();
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

Student::Student() : Person() {
	nHakbun = 0;
}
Student::Student(string name, int age, int hakbun)
	: Person(name, age), nHakbun(hakbun) {}

void Person::hi () {
	cout << "�̸�: " << sName << endl;
	cout << "����: " << nAge << endl;
}
void Student::study() {
	hi();
	cout << "�й�: " << nHakbun << endl << endl;
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

