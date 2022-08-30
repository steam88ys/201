#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void eat(void) { cout << "동물먹어" << endl; }
	void roar(void) { cout << "동물짖어" << endl; }
	void walk(void) { cout << "동물걸어" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger :public Animal {
public:
	void roar(void) { cout << "어흥" << endl; }
};

class Dog :public Animal {
public:
	void roar(void) { cout << "멍멍" << endl; }
};

int main(void)
{
	Animal animal;	// Stack영역에 정적 할당
	animal.roar();	// "동물짖어"

	Dog dog;	// Stack영역에 정적 할당
	dog.roar();	//"멍멍"
}