#include <iostream>
using namespace std;

void jungjuk(void)
{
	static int a = 0;	// �� �� �Ҵ�Ǹ� �� ���´�.
	cout << "���� �������� a�� " << a << endl;
	a++;
}

int main(void)
{
	jungjuk();	// 0
	jungjuk();	// 1
	jungjuk();	// 2
}