#include <iostream>
#include <cstring>  // strcmp 사용

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
    m_string& operator+=(const m_string& rhs);  // 문자열 덧붙이는 연산자 오버로딩
    int operator==(const m_string& rhs);    
    m_string operator+(const m_string& rhs);    // 결합된 문자열로 초기화된 객체 반환

    int size(); // 문자열의 글자수 반환
    int length();   // 문자열의 글자수 반환
    int c_str();  // 문자열의 시작주소 반환

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

m_string::m_string(const char* str) {   // 복사 생성자
    _Mysize = strlen(str) + 1;
    _Myptr = new char[_Mysize];
    strcpy(_Myptr, str);
}

m_string::m_string(const m_string& str) {   // 복사 생성자
    _Mysize = str._Mysize;
    _Myptr = new char[_Mysize];
    strcpy(_Myptr, str._Myptr);
}

m_string::~m_string() {
    if (_Myptr != NULL) delete[] _Myptr;
}

m_string& m_string::operator=(const m_string& rhs) {
    if (_Mysize != NULL) delete[] _Myptr;

    _Mysize = strlen(rhs._Myptr) + 1;
    _Myptr = new char[_Mysize];
    strcpy(_Myptr, rhs._Myptr);

    return *this;
}

m_string& m_string::operator+=(const m_string& rhs) {
    char* str = new char[_Mysize + rhs._Mysize - 1];    // null 두개라 하나 빼줌
    strcpy(str, _Myptr);
    strcat(str, rhs._Myptr);

    if (_Myptr != NULL) delete[] _Myptr;

    _Myptr = str;
    return *this;
}

int m_string::operator==(const m_string& rhs) { // 같은지 틀린지 확인
    return (strcmp(_Myptr, rhs._Myptr));
}

m_string m_string::operator+(const m_string& rhs) {
    char* str = new char[_Mysize + rhs._Mysize - 1];    // null 두개라 하나 빼줌
    strcpy(str, _Myptr);
    strcat(str, rhs._Myptr);

    m_string answer(str); //객체 생성
    delete[] str;

    return answer;
}

int m_string::size() {  // size함수 구혐
    return _Mysize - 1;
}
int m_string::length() {    // length함수 구현
    return _Mysize - 1;
}
int m_string::c_str() {   // c_str함수 구현
    return (int)_Myptr; // 주소값 출력
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

    return 0;
}