class Point
{
public:
	// ������
	Point(int _x, int _y);
	// �Ű������� ���� ������
	Point(void);

	// ������ �����ε�
	Point operator+(const Point& rhs);//right hand side: ������ ���

	void print(void);

private:
	int mX;
	int mY;
};