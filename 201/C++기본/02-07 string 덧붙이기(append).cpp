#include <iostream>	
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int main(void)
{
	char cMunja[20];
	strcpy(cMunja, "c_insert");		// c_insert
	strcat(cMunja, "++");			// c_insert++
	printf("%s \n", cMunja);

	// 주의사항 "cpp_insert" + "++"하면 에러발생
	string cppMunja;
	cppMunja = "cpp_insert";		// cpp_insert
	cppMunja = cppMunja + "++";		// cpp_insert++
	cout << cppMunja << endl;
}