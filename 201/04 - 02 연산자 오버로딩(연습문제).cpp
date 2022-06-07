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
	Integer temp; // �Ű����� ���� ������ �ʿ�
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
	c.print();	// 3�� ��µǵ���

	return 0;
}
