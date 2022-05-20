#include <iostream>
#include <string.h>

using namespace std;

class Person {					// Person 클래스
private:
	string sName;
protected:
	int nAge;
public:
	Person();
	Person(string name, int age);
	void hi();
};		

class Student : public Person {	// Student 클래스 (Person 상속)
private:
	int nHakbun;
public:
	Student();
	Student(string name, int age, int hakbun);
	void study();
};

class CBox {
private:
	double width;
public :
	void setWidth(double w) {
		width = w;
	}
};
class ChildBow : CBox {
	void setWidth2(){
		setWidth(100);
 }
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
	nAge = 100;
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

	Student stu;
	stu.study();

	return 0;
}

