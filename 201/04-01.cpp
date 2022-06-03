#include<iostream> // cout,endl ���
#include "04-01.h"
using namespace std;

// ������ ����:�ʱ�ȭ 
Point::Point(int _x, int _y) :mX(_x), mY(_y) {}
// �Ű����� ���� ������ ����
Point::Point() {}

void Point::print(void)
{
	cout << "(" << mX << ", " << mY << ")" << endl;
}
Point Point::operator+(const Point& rhs)
{
	Point p; // �Ű����� ���� ������ �ʿ�
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
}