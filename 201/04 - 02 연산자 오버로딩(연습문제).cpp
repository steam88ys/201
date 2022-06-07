#include <iostream>
#include "04 - 02.h"

using namespace std;


int main(void) {
	
	Integer a(1);
	Integer b(2);
	Integer c = a + b;
	c.print();	// 3이 출력되도록

	return 0;
}
