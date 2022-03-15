#include <stdio.h>

int main(void)
{
	int x = 1;

	switch (x)
	{
	case 0:
		printf("0");
		break;
	case 1:
		printf("1");
		// break가 없기 때문에 콘솔창에서는 "12"를 출력
	case 2:
		printf("2");
		break;
	default:
		printf("d");
		break;
	}

	return 0;
}