#include <iostream>	
using namespace std;


void plus2(int* num)
{
	*num += 2;	// num�� ������ �����̱⿡ ���ΰ��� *�� �Ἥ ó��
}

int main(void)
{
	int a = 3;
	plus2(&a);	// ������ �Ű����� num���� �ּҰ����� ����
	cout << a << endl;
}