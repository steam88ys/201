#include <iostream>	// cout, endl ���
using namespace std;

class Point 
{
public:
	Point();	// �⺻ ������
	
	Point(int _x, int _y);	// ������

	// ������ �����ε�
	Point operator+(const Point& rhs);

	void print(void);

private:
	int mX;
	int mY;
};

Point::Point() {};	// �⺻ ������
Point::Point(int _x, int _y) : mX(_x), mY(_y) {}	// ������

void Point::print(void)
{
	cout << "X: " << mX << endl;
	cout << "Y: " << mY << endl;

}

// ��ȯ�� Ŭ���� �Լ��̸� �Ű�����
Point Point::operator+(const Point& rhs)
{		
	Point p;	// �Ű������� ���� ������ �ʿ�
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
}

int main(void)
{
	Point p1(1, 2);
	Point p2(3, 4); 

	Point sum = p1 + p2;	//Point sum = p1.operator+(p2);

	sum.print();	// 4, 6

	return 0;
}