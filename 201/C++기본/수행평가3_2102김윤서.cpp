#include <iostream>
#include <string.h>

using namespace std;

class m_string {
private:
    char* _Myptr;   // 실제 문자열의 시작주소를 담고 있는 포인터
    int _Mysize;    // 문자열의 글자수

public:
    m_string(); // 생성자
    m_string(const char* str);  // 복사 생성자
    m_string(const m_string& str);  // 복사 생성자
    ~m_string();    // 소멸자

    m_string& operator=(const m_string& rhs);
    int operator==(const m_string& rhs);
    m_string operator+(const m_string& rhs);    // 결합된 문자열로 초기화된 객체 반환

    int size(); // 문자열의 글자수 반환
    int length();   // 문자열의 글자수 반환
    char* c_str();  // 문자열의 시작주소 반환

    friend ostream& operator<<(ostream& os, const m_string& ms)
    {
        os << ms._Myptr;
        return os;
    }
};

m_string::m_string() {  // 생성자 초기화
    _Mysize = 0;
    _Myptr = NULL;
}

m_string::m_string(const char* str) {   // 복사 생성자 ( m_string str1 = "123";) (깊은 복사.객체 자체를 복사)
    _Mysize = strlen(str)+1;  // const : 기존의 객체의 멤버 변수 값을 건드리지 x
    _Myptr = new char[_Mysize];
    strcpy(_Myptr, str);
}

m_string::m_string(const m_string& str) {   // 복사 생성자 (m_string str2 = str1;)   (깊은 복사.객체 자체를 복사)
    _Mysize = str._Mysize;
    _Myptr = new char[_Mysize]; // 새롭게 메모리 할당
    strcpy(_Myptr, str._Myptr); // 메모리 자체를 복사
}

m_string::~m_string() { // 소멸자
    if (_Myptr != NULL) delete[] _Myptr;
}

m_string& m_string::operator=(const m_string& rhs) {    // = 연산자 오버로딩 (깊은 복사.객체 자체를 복사)
    if (_Mysize != NULL) {
        delete[] _Myptr;
        _Myptr = NULL;
    }

    _Mysize = strlen(rhs._Myptr)+1;
    _Myptr = new char[_Mysize];
    strcpy(_Myptr, rhs._Myptr);

    return *this;
}

int m_string::operator==(const m_string& rhs) { // 같은지 틀린지 확인
    return (strcmp(_Myptr, rhs._Myptr));    // 같으면 0, 그 외에는 1, -1 반환
}

m_string m_string::operator+(const m_string& rhs) {  // 결합된 문자열로 초기화된 객체 반환
    char* str = new char[_Mysize + rhs._Mysize - 1];    // null 두개라 하나 빼줌
    strcpy(str, _Myptr);    // 추가할 문자열 복사
    strcat(str, rhs._Myptr);    // 문자열 두개 이어 붙이기

    m_string answer(str); //객체 생성 & 결합된 문자열로 초기화
    delete[] str;   // 해제

    return answer;
}

int m_string::size() {  // size함수 구혐
    return _Mysize-1; // null 자리 빼고
}
int m_string::length() {    // length함수 구현
    return _Mysize-1; // null 자리 빼고
}
char* m_string::c_str() {   // c_str함수 구현
    return _Myptr; // 주소값 출력
}

int main(void)
{
    m_string str1 = "123";
    cout << str1 << " " << str1.size() << endl; // 123 3

    m_string str2 = str1;
    cout << str2 << " " << str2.size() << endl; // 123 3

    str2 = "m_string";
    cout << str2 << " " << str2.size() << endl; // m_string 8

    str2 = str2 + str1;
    cout << str2 << " " << str2.size() << endl; // m_string123 11

    str2 = str2 + "ab";
    cout << str2 << " " << str2.size() << endl; // m_string123ab 13

    cout << (str1 == "123") << endl; //0

    cout << (str1 == str2) << endl; //-1

    // cout << &str1 << endl;
    // printf("%p", str1.c_str()); 주소값 출력 가능

    return 0;
}