#include <iostream>
#include <string>

using namespace std;

class Character {
public: 
	string name;
	int strength;
	int attack;
	int defense;
	Character(string Cname, int Cstrength, int Cattack, int Cdefense);
	void out();
};

Character::Character(string Cname, int Cstrength, int Cattack, int Cdefense)
	:name(Cname), strength(Cstrength), attack(Cattack), defense(Cdefense) {
}

void Character::out() {
	cout << "�̸�: " << name << endl;
	cout << "ü��: " << strength << endl;
	cout << "����: " << attack << endl;
	cout << "���: " << defense << endl;
}

int main(void)
{
	Character* ch1 = new Character("������", 5, 6, 1);
	ch1->out();
	delete ch1;
}