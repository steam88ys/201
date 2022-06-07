#include <iostream>
#include <string.h>

using namespace std;

class Integer{
public:
	Integer(){}
	Integer(int v) : value(v) {}
	Integer operator+(const Integer& rhs);
	void print();
	
private:
	int value;
};

Integer Integer::operator+(const Integer& rhs)
{
	Integer temp; // 매개변수 없는 생성자 필요
	temp.value = value + rhs.value;
	return temp;
}

void Integer::print() 
{
	cout << value << endl;
}

int main(void) {
	
	Integer a(1);
	Integer b(2);
	Integer c = a + b;
	c.print();	// 3이 출력되도록

	return 0;
}
