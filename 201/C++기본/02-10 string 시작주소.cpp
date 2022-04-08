#include <iostream>	// cout, endl 사용
#include <stdio.h>	// printf 사용
#include <string.h>	// strlen 사용	
#include <string>	// std::string 클래스 사용
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%s \n", cI);	// aaa

	string cppI = "aaa";
	printf("%s \n", cppI.c_str());	// aaa
	cout << cppI.c_str() << endl;	// aaa
}