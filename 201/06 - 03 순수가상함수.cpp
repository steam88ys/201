#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	virtual void eat(void) = 0;
	virtual void roar(void) = 0;
	virtual void walk(void) = 0;

private:
	string name;
	int sex;
	int age;
};

class Tiger :public Animal {
public:
	void eat(void) override { cout << "호랑이 냠냠" << endl; }
	void roar(void) override { cout << "어흥" << endl; }	// override 필수x (실수 방지용)
	void walk(void) override { cout << "호랑이 당당" << endl; }
};

class Dog :public Animal {
public:
	void eat(void) override { cout << "강아지 쩝쩝" << endl; }
	void roar(void) override { cout << "멍멍" << endl; }
	void walk(void) override { cout << "강아지 사뿐" << endl; }
};

int main(void)
{
	//Animal* animal = new Animal();	// 실체가 없는 객체는 생성불가
	Animal* animal = new Tiger();
	delete animal;	// 포인터 변수가 참조하고 있는 공간이 사라짐
}