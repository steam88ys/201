#include <iostream>	
using namespace std;

int main(void)
{
	int a;

	int* pa = &a;	// 포인터로 a값을 바꿈
	*pa = 30;		// a값이 30으로 바뀜
	cout << "pa : " << a  << endl;

	int& ra = a;	// 참조로 a값을 바꿈
	ra = 50;		// a값이 50으로 바뀜
	cout << "ra : " << a;
}