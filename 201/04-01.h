class Point
{
public:
	// 생성자
	Point(int _x, int _y);
	// 매개변수가 없는 생성자
	Point(void);

	// 연산자 오버로딩
	Point operator+(const Point& rhs);//right hand side: 오른쪽 방면

	void print(void);

private:
	int mX;
	int mY;
};