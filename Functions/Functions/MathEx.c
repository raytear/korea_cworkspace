#include <stdio.h>
#include <math.h> //round(), floor(), ceil(), abs(), pow(), sqrt()
/*
	���� ���� �Լ� - math.h ����
*/
int main()
{
	//�ݿø� - round()
	printf("%.1f\n", round(2.54)); //3.0
	printf("%.1f\n", round(2.14)); //2.0

	//����(����) - floor()
	printf("%.1f\n", floor(2.54)); //2.0
	printf("%.1f\n", floor(2.14)); //2.0

	//�ø� - ceil()
	printf("%.f\n", ceil(2.54));   //3
	printf("%.f\n", ceil(2.14));   //3

	//���밪 - abs()
	printf("%d\n", abs(-8));	   //8
	printf("%d\n", abs(8));		   //8

	//�ŵ����� - pow()
	printf("%.f\n", pow(2, 4));	   //16
	printf("%.f\n", pow(10, 3));   //1000

	//������ - sqrt()
	printf("%.f\n", sqrt(16));	   //4
	printf("%.f\n", sqrt(100));	   //10

	return 0;
}