#include<iostream> // cout,endl 사용
#include "04-01.h"
using namespace std;

int main(void)
{
	Point p1(1, 2);
	Point p2(3, 4);
	Point sum = p1.operator+(p2); // p1 + p2
	sum.print(); // (4,6)이 출력
	p1.print();
	return 0;
}