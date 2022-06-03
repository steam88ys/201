#include <iostream>	// cout, endl »ç¿ë
using namespace std;

class Point 
{
public:
	Point(int _x, int _y);
	void print(void);
private:
	int mX;
	int mY;
};

Point::Point(int _x, int _y) : mX(_x), mY(_y) {}

void Point::print(void)
{
	cout << "X: " << mX << endl;
	cout << "Y: " << mY << endl;

}

int main(void)
{
	Point p1(1, 2);
	p1.print();

	return 0;
}