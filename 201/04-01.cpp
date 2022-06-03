#include<iostream> // cout,endl 사용
#include "04-01.h"
using namespace std;

// 생성자 정의:초기화 
Point::Point(int _x, int _y) :mX(_x), mY(_y) {}
// 매개변수 없는 생성자 정의
Point::Point() {}

void Point::print(void)
{
	cout << "(" << mX << ", " << mY << ")" << endl;
}
Point Point::operator+(const Point& rhs)
{
	Point p; // 매개변수 없는 생성자 필요
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
}