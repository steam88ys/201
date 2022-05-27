#include <iostream>
#include <string.h>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public:
	// ������ �ۼ�
	CBank();
	CBank(string name, string account, int balance);
	// �ԱݵǴ� �ݾ��� ����ϴ� �Լ� �ۼ�
	void print();
};
CBank::CBank()
{
}
CBank::CBank(string pname, string paccount, int pbalance)	// �Ϲݻ����� ȣ��
	:name(pname), account(paccount), balance(pbalance)
{
	/*this->name = name;
	this->account = account;
	this->balance = balance;*/
}
void CBank::print()
{
	cout << "�̸�: " << name << endl;
	cout << "����: " << account << endl;
	cout << "�ԱݵǴ� �ݾ�: " << balance << endl << endl;
}

int main(void)
{
	CBank p1 = CBank("������", "����", 150);
	p1.print();

	CBank p2 = CBank("�̸̹�", "ī��", 200);
	p2.print();

	return 0;
}