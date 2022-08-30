#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal 생성" << endl; }
	virtual ~Animal() { cout << "Animal 소멸" << endl; }
	void eat(void) { cout << "동물먹어" << endl; }
};

class Tiger :public Animal {
public:
	Tiger() { cout << "Tiger 생성" << endl; }
	virtual ~Tiger() { cout << "Tiger 소멸" << endl; }
};

int main(void)
{
	Animal* animal = new Tiger();
	delete animal;
}