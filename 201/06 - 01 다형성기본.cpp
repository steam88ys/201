#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void eat(void) { cout << "동물먹어" << endl; }
	virtual void roar(void) { cout << "동물짖어" << endl; }
	void walk(void) { cout << "동물걸어" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger :public Animal {
public:
	void roar(void) override { cout << "어흥" << endl; }	// override 필수x (실수 방지용)
};

class Dog :public Animal {
public:
	void roar(void) override { cout << "멍멍" << endl; }
};

int main(void)
{
	Animal* animal = new Animal();	// 동적할당 (포인터 변수)
	animal->roar();	// "동물짖어"
	delete animal;	// 포인터 변수가 참조하고 있는 공간이 사라짐

	animal = new Tiger();
	animal->roar();	// "어흥"
	delete animal;

	animal = new Dog();
	animal->roar();	// "멍멍"
	delete animal;

} 