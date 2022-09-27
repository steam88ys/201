#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
class Character {
public:
	Character(T1 na, T2 str, T2 at, T2 de) 
		: name(na), strength(str), attack(at), defense(de) {}

	void out() {
		cout << "�̸�: " << name << endl;
		cout << "ü��: " << strength << endl;
		cout << "����: " << attack << endl;
		cout << "���: " << defense << endl;
	}

private:
	T1 name;
	T2 strength;
	T2 attack;
	T2 defense;
};

int main(void)
{
	Character<string, int>* ch = new Character<string, int>("AAA", 10, 5, 3);
	ch->out();

	delete ch;
	
	return 0;
}