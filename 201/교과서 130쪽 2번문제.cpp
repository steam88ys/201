#include <iostream>
#include <string.h>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public:
	// 생성자 작성
	CBank();
	CBank(string name, string account, int balance);
	// 입금되는 금액을 출력하는 함수 작성
	void print();
};
CBank::CBank()
{
}
CBank::CBank(string pname, string paccount, int pbalance)	// 일반생성자 호출
	:name(pname), account(paccount), balance(pbalance)
{
	/*this->name = name;
	this->account = account;
	this->balance = balance;*/
}
void CBank::print()
{
	cout << "이름: " << name << endl;
	cout << "계좌: " << account << endl;
	cout << "입금되는 금액: " << balance << endl << endl;
}

int main(void)
{
	CBank p1 = CBank("김윤서", "농협", 150);
	p1.print();

	CBank p2 = CBank("이미림", "카뱅", 200);
	p2.print();

	return 0;
}