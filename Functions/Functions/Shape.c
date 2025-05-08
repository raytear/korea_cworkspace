#include <stdio.h>

//실습 문제 풀이

int square();
float triangle();
int main()
{
	int rectArea;
	float triArea;

	//정사각형의 넓이 계산
	rectArea = square(4);
	
	//삼각형의 넓이 계산
	triArea = triangle(3, 5);

	printf("정사각형의 넓이 : %dcm\n", square(4));
	printf("삼각형의 넓이 : %.1fcm\n", triArea);

	return 0;
}

int square(int x)
{
	return x * x;
}

float triangle(int size, int height)
{
	//강제형변환 해야 실수로 반환됨
	float area = (float)(size * height) / 2;
	return area;
}