#include <iostream>
#include <string>	// 문자열
#include <string.h>	// 문자열 함수

using namespace std;

int main(void)
{
	char cMunja[20];
	strcpy(cMunja, "c_insert");
	strcat(cMunja, "++");
	printf("%s \n", cMunja);

	string cppMunja;
	cppMunja = "cpp_insert";
	cppMunja = cppMunja + "++";
	cout << cppMunja << endl;

	string cppI = "aaa";
	printf("%s \n", cppI);	// 잘못된 코드
	printf("%s \n", cppI.c_str());	// aaa
}