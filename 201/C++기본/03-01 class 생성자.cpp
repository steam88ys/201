#include <iostream>	// cout, endl ���
#include <string>

using namespace std;

class Student 
{
private:
	int nHakbun;
	string sName;
	
public:
	// ������ : ��ü�� �����Ǹ� �ڵ����� ȣ��Ǵ� �Լ�
	// ��ȯ���� �������� �ʴ´�
	Student();

	void show();
};

Student::Student()
{
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}
void Student::show()
{
	cout << "�й��� " << nHakbun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl;
}

int main(void)
{
	Student stu;
	stu.show();
}