#include <iostream>
#include <string>
#include <map>

using namespace std;

// �쿵��: ������
// ����: ���⿵
// �ǹμ�: ������
// ����ȣ: ���¿�

int main(void)
{
	map<string, string> IBW;	// IBW: �̻��� ��ȣ�� �쿵��
	IBW["�쿵��"] = "������";
	IBW["����"] = "���⿵";
	IBW["�ǹο�"] = "������";
	IBW["����ȣ"] = "���¿�";

	map<string, string>::iterator iter;
	for (iter = IBW.begin(); iter != IBW.end(); iter++)
		cout << iter->first << "�� " << iter->second << "��" << endl;

	//  "�쿵��"�� key�� ������ interator
	map<string, string>::iterator main_person = IBW.find("�쿵��");
	cout << "����� ���ΰ��� " << main_person->second << endl;

	// �ش� key�� �����ϴ��� üũ
	if (main_person != IBW.end())
		cout << "����� ���ΰ��� " << IBW["�쿵��"] << endl;;
}