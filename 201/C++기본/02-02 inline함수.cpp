#include <iostream>	
using namespace std; 

// pre컴파일러가 처리
// 자료형 영향받지 않음
// 디버깅 불편
//#define jegob(A) ((A) * (A))

// 매크로 함수와 유사함 
// 실제로 함수가 호출되지 않으며
// 자료형에 영향받고
// 컴파일러가 처리 -> 디버깅이 수월함
inline int jegob(int a)
{
	return a * a;
}

int main(void)
{
	cout << jegob(3) << endl;
}