#include <iostream>
#include <string>

using namespace std;

template <typename T>
class MyData {
public:
	void setData(T pdata)
	{
		mydata = pdata;
	}
	T getData()
	{
		return mydata;
	}

private:
	T mydata;
};

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
	cout << "ÀÌ¸§: " << name << endl;
	cout << "Ã¼·Â: " << strength << endl;
	cout << "°ø°İ: " << attack << endl;
	cout << "¹æ¾î: " << defense << endl;
}

int main(void)
{
	Character* ch1 = new Character("±èÀ±¼­", 5, 6, 1);

	ch1->out();
	delete ch1;
}