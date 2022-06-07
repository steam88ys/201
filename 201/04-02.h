class Integer 
{
public:
	Integer() {}
	Integer(int v) : value(v) {}
	Integer operator+(const Integer& rhs);
	void print();

private:
	int value;
};