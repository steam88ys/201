#include <iostream>
#include <string>	// ���ڿ�
#include <string.h>	// ���ڿ� �Լ�

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
	printf("%s \n", cppI);	// �߸��� �ڵ�
	printf("%s \n", cppI.c_str());	// aaa
}