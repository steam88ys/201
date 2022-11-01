#include <iostream>
using namespace std;

int main(void)
{

	int arr[] = { 10, 20, 30, 40 };
	for (auto& x : arr)
		x = x + 1;
	cout << x.fist;
}