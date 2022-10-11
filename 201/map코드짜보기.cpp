#include <iostream>
#include <string>
#include <map>

using namespace std;

// 우영우: 박은빈
// 정명석: 강기영
// 권민수: 주종혁
// 이준호: 강태오

int main(void)
{
	map<int, int>map_test;
	map_test[1] = 11;

	pair<int, int>p(2, 12);
	map_test.insert(p);
	pair<int, int>p2(3, 13);
	map_test.insert(p2);
	pair<int, int>p3(4, 14);
	map_test.insert(p3);

	map<int, int>::iterator iter1;
	for (iter1 = map_test.begin(); iter1 != map_test.end(); iter1++)
		cout << "첫번째:  " <<  iter1->first << "두번째: " << iter1->second  << endl;

	map_test.erase(1);

	cout << endl;

	map<int, int>::iterator iter2;
	for (iter2 = map_test.begin(); iter2 != map_test.end(); iter2++)
		cout << "첫번째:  " << iter2->first << "두번째: " << iter2->second << endl;
}