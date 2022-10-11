#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int>v;
	int input, tot = 0;
	double avg=0;

	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator ptr;
	for (ptr = v.begin(); ptr != v.end(); ptr++)
	{
		avg += *ptr;
		cout << *ptr << " ";
	}
	avg /= v.size();
	cout << avg;
}