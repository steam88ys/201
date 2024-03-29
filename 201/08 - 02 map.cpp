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
	map<string, string> IBW;	// IBW: 이상한 변호사 우영우
	IBW["우영우"] = "박은빈";
	IBW["정명석"] = "강기영";
	IBW["권민우"] = "주종혁";
	IBW["이준호"] = "강태오";

	for (auto& iter : IBW)
		cout << iter.first << "역 " << iter.second << "분" << endl;

	//  "우영우"란 key를 가지는 interator
	map<string, string>::iterator main_person = IBW.find("우영우");
	cout << "드라마의 주인공은 " << main_person->second << endl;

	// 해당 key가 존재하는지 체크
	if (main_person != IBW.end())
		cout << "드라마의 주인공은 " << IBW["우영우"] << endl;;
}