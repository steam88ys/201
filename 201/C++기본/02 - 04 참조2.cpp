#include <iostream>	
using namespace std;


//void plus2(int* num)
//{
//	*num += 2;	// num이 포인터 변수이기에 내부값을 *로 써서 처리
//}
//
//int main(void)
//{
//	int a = 3;
//	plus2(&a);	// 포인터 매개변수 num에게 주소값으로 전달
//	cout << a << endl;
//}

// 참조형
void plus2(int& num)
{
	num += 2;	// num이 참조형 변수이기에 *을 안써서 내부값 처리
}
int main(void)
{
	int a = 3;
	plus2(a);	// 참조형 매개변수 num에게 전달
	cout << a << endl;

}