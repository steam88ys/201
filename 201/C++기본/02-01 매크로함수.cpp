#include <iostream>	
using namespace std; 

#define jegob(A) ((A) * (A))

int main(void)
{
	cout << jegob(3+1) << endl;	// 4*4와 같음
	cout << ((3+1) * (3+1)) << endl;	// 위 코드와 같음
}