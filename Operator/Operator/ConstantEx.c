#include <stdio.h>
#define PI 3.1415

/*
	상수(constant) - 변경될 수 없는 값
	1. 매크로(macro) 상수
	2. const 자료형
*/

int main()
{
	const int MIN_NUM = 1; //상수
	const int MAX_NUM = 100;

	//MIN_NUM = 0;	//값을 변경할 수 없음(재할당 안됨)

	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);

	//원의 넓이 계산
	int radius = 10;
	//const double PI = 3.1415;
	double area;

	area = PI * radius * radius;

	printf("%.2lf\n", area);


	return 0;
}