#include <iostream>
#include <string>

using namespace std;

int sum(int a, int b);
float sum(float a, float b);
string sum(std::string a, string b);

int main(void)
{
	cout << sum(1, 2) << endl;
	cout << sum(1.f, 2.f) << endl;
	cout << sum("1", "2") << endl;
}

int sum(int a, int b)
{
	return 0;
}

float sum(float a, float b)
{
	return 0.0f;
}

string sum(std::string a, string b)
{
	return string();
}
