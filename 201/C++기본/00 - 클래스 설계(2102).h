#define CONDITION_GOOD 0	// 건강상태
#define CONDITION_SOSO 1
#define CONDITION_BAD 2

#define TYPE_FSIH 0	// 음식
#define TYPE_MEAT 1
#define TYPE_BIRD 2

class Creature	// 모든생물
{
public:
	bool isSick()	// 질병 유무
	{
		return sickness;
	}
private:
	int hp;
	int damage;
	int hungry;	// 배고픈 정도
	bool sickness;
};

class food
{
public:
	int type;
};

class Animal : public Creature	// 동물
{
public:
	void swim();
	void fly();
	void run();
private:
	char food;
	int condition;
};