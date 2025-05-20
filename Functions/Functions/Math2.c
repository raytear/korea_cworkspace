#define _USE_MATH_DEFINES //M_PI 상수 사용
#include <stdio.h>
#include <math.h>

int myPow(int x, int y)
{
	int gob = 1;
	int i;
	for (i = 0; i < y; i++)
	{
		gob *= x;
	}

	return gob;
	/*
		x=2, y=3
		i=0, gob=1x2
		i=1, gob=2x2
		i=2, gob=4x2
		i=3, 반복 종료
	*/

}

int main()
{
	//원주율 - 상수(M_PI)
	printf("%f\n", M_PI);
	printf("%.3f\n", M_PI);
	
	int ans = pow(2, ceil(M_PI)); //16, ceil(M_PI) - 4
	printf("%d\n", ans);

	//거듭제곱 호출
	printf("%d\n", myPow(2, 3));

	//1부터 5까지 곱하기
	int gob = 1;
	int i;
	for (i = 1; i <= 5; i++) 
	{
		gob *= i;
		printf("i=%d, gob=%d\n", i, gob);
	}
	printf("%d\n", gob);

	return 0;
}