#include <iostream>
#include <string.h>

using namespace std;

class Person {					// Person 클래스
private:
	string sName;
	int nAge;
public:
	Person();
	Person(string name, int age);
	void hi();
};		

class Student : public Person {	// Student 클래스 (Person 상속)
	int nHakbun;
public:
	Student();
	Student(string name, int age, int hakbun);
	void study();
};

Person::Person()
{
	sName = "익명";
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
	cout << "이름: " << sName << endl;
	cout << "나이: " << nAge << endl;
}
void Student::study() {
	hi();
	cout << "학번: " << nHakbun << endl << endl;
}

int main(void) {
	Person p1 = Person();
	p1.hi();

	Person *p2 = new Person("김윤서", 18);
	p2->hi();
	delete p2;

	Person* people = new Person[5];
	people[0].hi();
	delete[] people;

	return 0;
}

