#include <iostream>	
using namespace std;

int main(void)
{
	int a;

	int* pa = &a;	// �����ͷ� a���� �ٲ�
	*pa = 30;		// a���� 30���� �ٲ�
	cout << "pa : " << a  << endl;

	int& ra = a;	// ������ a���� �ٲ�
	ra = 50;		// a���� 50���� �ٲ�
	cout << "ra : " << a;
}