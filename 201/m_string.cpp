#include <iostream>
#include <string.h>
using namespace std;

class m_string {
public:
	m_string() {}

	m_string(const m_string& rhs) : _Mysize(rhs._Mysize)	// &쓴 이유: rhs가 객체인데 메모리가 커지니까 객체 통째로 넘겨버리는거임
	{
		_Myptr = new char[_Mysize + 1];
		strcpy(_Myptr, rhs._Myptr);
	}

	m_string(const char* str)	// const 123null 값을 바꾸지 않겠다는 의미
	{
		_Mysize = strlen(str);	// 문자의 길이 구해주기
		_Myptr = new char[_Mysize + 1];	// 포인터가 동적 할당된 공간을 가리킴 (_Myptr: 배열을 가리키는 포인터)
		strcpy(_Myptr, str);	// 가리키는 공간에 문자 복사
	}

	~m_string()
	{
		delete[]_Myptr;
	}

	m_string& operator=(const m_string& rhs)	// 멤버 변수 초기화 없음
	{
		delete[]_Myptr;	// 기존에 있던거 지워주기

		_Mysize = rhs._Mysize;
		_Myptr = new char[_Mysize + 1];
		strcpy(_Myptr, rhs._Myptr);

		return *this;
	}

	m_string& operator=(const char* str)
	{
		delete[]_Myptr;

		_Mysize = strlen(str);
		_Myptr = new char[_Mysize + 1];
		strcpy(_Myptr, str);

		return *this;
	}

	m_string operator+(const m_string& rhs)
	{
		m_string temp;	// 새로운 임시 객체
		temp._Mysize = _Mysize + rhs._Mysize;
		temp._Myptr = new char[temp._Mysize + 1];

		strcpy(temp._Myptr, _Myptr);
		strcat(temp._Myptr, rhs._Myptr);

		return temp;
	}

	m_string operator+(const char* str)
	{
		m_string temp;
		temp._Mysize = _Mysize + strlen(str);
		temp._Myptr = new char[temp._Mysize + 1];

		strcpy(temp._Myptr, _Myptr);
		strcat(temp._Myptr, str);

		return temp;
	}

	int operator==(const m_string& rhs)
	{
		return strcmp(_Myptr, rhs._Myptr);
	}

	int operator==(const char* str)
	{
		return strcmp(_Myptr, str);
	}

	friend ostream& operator<<(ostream& os, const m_string& ms)
	{
		os << ms._Myptr;
		return os;
	}

	unsigned int size(void) { return _Mysize; }
	unsigned int length(void) { return _Mysize; }
	const char* c_str(void) { return (const char*)_Myptr; }

private:
	unsigned int _Mysize;
	char* _Myptr;
};


int main(void)
{
	m_string str1 = "123";	// 복사 생성자
	cout << str1 << " " << str1.size() << endl;

	m_string str2 = str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = "m_string";	// 대입 연산자
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + "ab";
	cout << str2 << " " << str2.size() << endl;

	cout << (str1 == "123") << endl;
	cout << (str1 == str2) << endl;

	return 0;
}