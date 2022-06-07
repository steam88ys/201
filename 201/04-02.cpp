#include <iostream>
#include "04 - 02.h"

using namespace std;

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
