#include <stdio.h>

/*
	산술 연산자 : +, -, *, /, %
*/
int main()
{
	int a = 99;
	int b = 2;

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	//강제(명시적) 형변환(Type Conversion)
	printf("%.1lf\n", (double)a / b);
	printf("%d\n", a % b);

	//증감 연산자 - ++(1증가), --(1감소)
	//+=2 (2증가)

	//후치 연산자	//a = a + 1
	printf("%d\n", a++); //99	//더하기만 하고 값 출력은 안함
	printf("%d\n", a);  //100	//a의 값 출력(후치 연산)

	//전치 연산자
	printf("%d\n", ++a); //101	//먼저 값을 더함
	printf("%d\n", a); //101	//a의 값 출력(전치 연산)

	//후치 연산자	//a = a - 1
	printf("%d\n", a--); //101
	printf("%d\n", a); //100

	//전치 연산자
	printf("%d\n", --a); //99
	printf("%d\n", a); //99

	return 0;
}